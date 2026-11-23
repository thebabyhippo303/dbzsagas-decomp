/* WaterSurface__GetMeshKind @ 0x80277734 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;

s32 WaterSurface__GetMeshKind(void *arg0, void *arg1) {
    if (*(s32 *)((char *)arg1 + 0x58) <= 1 || *(s32 *)((char *)arg1 + 0x5C) <= 1) {
        return 0;
    }
    if (*(u8 *)((char *)arg1 + 0x18) != 0 && *(u8 *)((char *)arg1 + 0x38) != 0) {
        return 2;
    }
    return 1;
}
