/* SfxPlayer__SetVoiceVolume @ 0x80198F80 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK SfxPlayer__GetVoice(s32, s32);
M2C_UNK fn_8019CD78(s32, f32);
s32 SfxPlayer__SetVoiceVolume(s32 arg0, s32 arg1, f32 farg0) {
    s32 temp_r0 = SfxPlayer__GetVoice(arg0, arg1);

    if (temp_r0 == 0) {
        return 0;
    }
    fn_8019CD78(temp_r0, farg0);
    return 1;
}
