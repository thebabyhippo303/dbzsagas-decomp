/* SoundChannel__SetVolumeAndPan @ 0x80196DD8 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 SoundChannel__SetPan(s32, f32);
s32 SoundChannel__SetVolume(s32, f32);

s32 SoundChannel__SetVolumeAndPan(s32 arg0, f32 vol, f32 pan) {
    s32 a;
    s32 b;

    a = SoundChannel__SetVolume(arg0, vol);
    b = SoundChannel__SetPan(arg0, pan);
    return (a != 0) & (b != 0);
}
