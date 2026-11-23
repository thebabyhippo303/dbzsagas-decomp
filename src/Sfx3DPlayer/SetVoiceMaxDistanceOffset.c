/* Sfx3DPlayer__SetVoiceMaxDistanceOffset @ 0x80198920 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Sfx3DPlayer__GetVoice(s32, void *);
M2C_UNK Voice3D__SetMaxDistanceOffset(s32, f32);
s32 Sfx3DPlayer__SetVoiceMaxDistanceOffset(s32 arg0, void *arg1, f32 farg0) {
    s32 temp_r0 = Sfx3DPlayer__GetVoice(arg0, arg1);

    if (temp_r0 == 0) {
        return 0;
    }
    Voice3D__SetMaxDistanceOffset(temp_r0, farg0);
    return 1;
}
