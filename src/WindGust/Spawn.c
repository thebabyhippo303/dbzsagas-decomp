/* WindGust__Spawn @ 0x8021A454 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void WindGust__Create(s32, s32, f32 *, s32, s32, s32, s32, f32, f32, f32, f32);
extern f32 lbl_803465DC __attribute__((section(".data")));

void WindGust__Spawn(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    f32 vec[3];
    f32 *p = vec;

    vec[0] = lbl_803465DC;
    p[1] = lbl_803465DC;
    p[2] = lbl_803465DC;
    WindGust__Create(arg0, arg1, p, arg2, 0, arg3, 0, farg0, farg1, farg2, farg3);
}
