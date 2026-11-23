/* Sound__Play3DAtActorWithVolumePitch @ 0x80188DC0 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK Sound__Play3DWithVolumePitch(s32, s32, s32, s32, f32, f32);
void Sound__Play3DAtActorWithVolumePitch(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    Sound__Play3DWithVolumePitch(arg0, arg1 + 0x38, arg1 + 0x68, arg2, farg0, farg1);
}
