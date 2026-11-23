/* CollPart__WriteActiveRowData @ 0x8028132C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 SurfacePairMap__GetCompactPairIndex(void *, s32, s32);

s32 CollPart__WriteActiveRowData(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 idx;

    if ((idx = SurfacePairMap__GetCompactPairIndex(*(void **)arg0, arg1, arg2)) >= 0) {
        ((u16 *)M2C_FIELD(arg0, void **, 0x2C))[idx] = M2C_FIELD(arg3, u16 *, 2);
    }
    return idx;
}
