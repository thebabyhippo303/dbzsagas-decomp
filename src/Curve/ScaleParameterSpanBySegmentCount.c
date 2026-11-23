/* Curve__ScaleParameterSpanBySegmentCount @ 0x800E0C10 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0x2CC0] = {1};

f32 Curve__ScaleParameterSpanBySegmentCount(void *arg0, f32 farg0, f32 farg1) {
    f32 temp_f0;

    temp_f0 = (f32) (f64) (M2C_FIELD(arg0, s32 *, 8) - 4);
    return (farg1 * temp_f0) - (farg0 * temp_f0);
}
