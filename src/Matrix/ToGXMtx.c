/* Matrix__ToGXMtx @ 0x80249D80 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
void Matrix__ToGXMtx(void *arg0, void *arg1) {
    *(f32 *)((char *)arg1 + 0) = *(f32 *)((char *)arg0 + 0);
    *(f32 *)((char *)arg1 + 4) = *(f32 *)((char *)arg0 + 0x10);
    *(f32 *)((char *)arg1 + 8) = *(f32 *)((char *)arg0 + 0x20);
    *(f32 *)((char *)arg1 + 0xC) = *(f32 *)((char *)arg0 + 0x30);
    *(f32 *)((char *)arg1 + 0x10) = *(f32 *)((char *)arg0 + 4);
    *(f32 *)((char *)arg1 + 0x14) = *(f32 *)((char *)arg0 + 0x14);
    *(f32 *)((char *)arg1 + 0x18) = *(f32 *)((char *)arg0 + 0x24);
    *(f32 *)((char *)arg1 + 0x1C) = *(f32 *)((char *)arg0 + 0x34);
    *(f32 *)((char *)arg1 + 0x20) = *(f32 *)((char *)arg0 + 8);
    *(f32 *)((char *)arg1 + 0x24) = *(f32 *)((char *)arg0 + 0x18);
    *(f32 *)((char *)arg1 + 0x28) = *(f32 *)((char *)arg0 + 0x28);
    *(f32 *)((char *)arg1 + 0x2C) = *(f32 *)((char *)arg0 + 0x38);
}