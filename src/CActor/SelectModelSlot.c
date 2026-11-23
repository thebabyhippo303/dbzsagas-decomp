/* CActor__SelectModelSlot @ 0x801DE840 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char u8; typedef unsigned short u16;

void CActor__SelectModelSlot(void *x, void *self, int idx) {
    u8 *base = (u8 *)self + 0x1AC;
    int wi = idx * 8;
    int v = *(int *)&base[wi];

    if (v != 0) {
        u16 f = *(u16 *)((char *)self + 2);
        *(int *)((char *)self + 0x78) = v;
        *(u16 *)((char *)self + 2) = f | 4;
        return;
    }
    {
        u8 *base2 = (u8 *)self + 0x1A8;
        int v2 = *(int *)&base2[wi];
        u16 f = *(u16 *)((char *)self + 2);
        *(int *)((char *)self + 0x78) = v2;
        *(u16 *)((char *)self + 2) = f & 0xFFFB;
    }
}
