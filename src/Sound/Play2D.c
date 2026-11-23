/* Sound__Play2D @ 0x80188B64 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK Sound__Play2DWithVolumePitch(s32, s32, f32, f32);
extern f32 lbl_8033E00C __attribute__((section(".data")));
extern f32 lbl_8033E010 __attribute__((section(".data")));

void Sound__Play2D(s32 arg0, s32 arg1) {
    Sound__Play2DWithVolumePitch(arg0, arg1, lbl_8033E00C, lbl_8033E010);
}
