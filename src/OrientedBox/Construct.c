/* OrientedBox__Construct @ 0x801C2304 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;

typedef struct OrientedBox {
    char pad[0x20];
    s32 a;
    s32 b;
} OrientedBox;

extern void OrientedBox__InitFromCenterExtents(OrientedBox *self, s32 arg);

OrientedBox *OrientedBox__Construct(OrientedBox *self, s32 a, s32 b, s32 arg3) {
    OrientedBox__InitFromCenterExtents(self, arg3);
    self->a = a;
    self->b = b;
    return self;
}
