/* VertexBuffer__Configure @ 0x8025076C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void VertexBuffer__SetFormat(void *, int, int);

int VertexBuffer__Configure(void *arg0, int arg1, int arg2, int arg3) {
    VertexBuffer__SetFormat(arg0, arg2, arg3);
    *(int *)((char *)arg0 + 0x28) = arg1;
    *(int *)((char *)arg0 + 0x30) = *(int *)((char *)arg0 + 0x24) * arg1;
    return 1;
}
