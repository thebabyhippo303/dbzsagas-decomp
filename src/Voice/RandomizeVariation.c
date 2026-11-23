/* Voice__RandomizeVariation @ 0x8019D0C8 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


f32 SoundDef__RandomVolume(s32);
f32 SoundDef__RandomPitch(s32);
void Voice__RandomizeVariation(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2C) = SoundDef__RandomVolume(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x30) = SoundDef__RandomPitch(M2C_FIELD(arg0, s32 *, 4));
}
