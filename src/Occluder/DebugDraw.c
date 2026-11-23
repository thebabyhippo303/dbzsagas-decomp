/* Occluder__DebugDraw @ 0x80240D9C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void DebugDraw__Line(void *, void *, s32);

void Occluder__DebugDraw(void *self) {
    void *a = self + 0x50;
    void *b = self + 0x5C;

    DebugDraw__Line(a, b, 0);
    {
        void *c = self + 0x68;
        void *d = self + 0x74;
        DebugDraw__Line(b, c, 0);
        DebugDraw__Line(c, d, 0);
        DebugDraw__Line(d, a, 0);
    }
}
