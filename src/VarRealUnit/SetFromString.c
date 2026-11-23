/* VarRealUnit__SetFromString @ 0x8018C960 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f64 String__ParseFloat(char *);
s32 VarRealUnit__SetFromString(u8 *arg0, s8 *arg1) {
    if (M2C_FIELD(arg0, s32 *, 0) & 1) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        *M2C_FIELD(arg0, f32 **, 0x40) = M2C_FIELD(arg0, f32 (**)(f32, s32), 0x50)((f32) String__ParseFloat((char *) arg1), M2C_FIELD(arg0, s32 *, 0x4C));
    } else {
        *M2C_FIELD(arg0, f32 **, 0x40) = M2C_FIELD(arg0, f32 (**)(f32), 0x50)((f32) String__ParseFloat((char *) arg1));
    }
    return 1;
}
