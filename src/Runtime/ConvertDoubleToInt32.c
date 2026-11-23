/* Runtime__ConvertDoubleToInt32 @ 0x8015D8E4 (size: 0x48, .text, MWCC GC/1.x (FileServer/MetroTRK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f64 lbl_8033C9B8 __attribute__((section(".data")));

s32 Runtime__ConvertDoubleToInt32(f64 farg0) {
    if (farg0 >= (f32) lbl_8033C9B8) {
        return (s32) ((f64) farg0 - lbl_8033C9B8) ^ 0x80000000;
    } else {
        return (s32) farg0;
    }
}
