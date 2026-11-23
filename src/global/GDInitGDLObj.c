/* GDInitGDLObj @ 0x802E6B70 (size: 0x18, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void GDInitGDLObj(void *self, int a, int b)
{
    int t;
    *(volatile int *)((char *)self + 0) = a;
    t = a + b;
    *(volatile int *)((char *)self + 8) = a;
    *(int *)((char *)self + 4) = b;
    *(int *)((char *)self + 12) = t;
}
