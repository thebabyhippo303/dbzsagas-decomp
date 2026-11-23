/* VarRealUnit__ConvertReciprocalScaled @ 0x8018F2E4 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_8033F274 __attribute__((section(".data")));

f32 VarRealUnit__ConvertReciprocalScaled(s32 arg0, f32 farg0) {
    s32 sp8;

    sp8 = arg0;
    return lbl_8033F274 / (farg0 * M2C_BITWISE(f32, sp8));
}
