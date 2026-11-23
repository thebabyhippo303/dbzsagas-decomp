/* WaterMesh__IsPointInCell @ 0x8027D2F4 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
s32 Triangle__IsPointInTriangle(void *, s32, s32, s32, s32, s32);

s32 WaterMesh__IsPointInCell(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 v[4];
    s32 a3 = arg3;
    s32 stride = *(s32 *)((char *)arg0 + 0x94);
    s32 a3p1 = a3 + 1;
    void *tab = *(void **)((char *)arg0 + 0xAC);
    s32 a2 = arg2;
    s32 idx0 = a2 + a3 * stride;
    s32 idx1 = a2 + a3p1 * stride;
    s32 i0p1 = idx0 + 1;
    s32 i1p1 = idx1 + 1;
    s32 result = 0;

    v[0] = *(s32 *)((char *)tab + 0x2C) + idx0 * *(s32 *)((char *)tab + 0x24);
    v[1] = *(s32 *)((char *)tab + 0x2C) + i0p1 * *(s32 *)((char *)tab + 0x24);
    v[2] = *(s32 *)((char *)tab + 0x2C) + idx1 * *(s32 *)((char *)tab + 0x24);
    v[3] = *(s32 *)((char *)tab + 0x2C) + i1p1 * *(s32 *)((char *)tab + 0x24);
    if ((Triangle__IsPointInTriangle(arg0, arg1, v[0], v[1], v[2], arg4) != 0) ||
        (Triangle__IsPointInTriangle(arg0, arg1, v[1], v[2], v[3], arg4) != 0)) {
        result = 1;
    }
    return result;
}
