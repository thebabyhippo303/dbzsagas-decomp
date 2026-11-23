/* TerrainMeshPart__Construct @ 0x801D1420 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef unsigned char u8;

typedef struct TerrainMeshPart {
    s32 a, b, c, pad0;
    u8 flag;
    char pad[3];
    s32 e;
    s32 f;
    s32 g, h, i;
    char sub[8];
} TerrainMeshPart;

extern void fn_801D3880(void *);

TerrainMeshPart *TerrainMeshPart__Construct(TerrainMeshPart *self) {
    register s32 zero = 0;
    s32 *p;

    self->g = zero;
    p = &self->g;
    *(volatile s32 *)((char *)p + 8) = zero;
    *(volatile s32 *)((char *)p + 4) = zero;
    fn_801D3880((char *)self + 0x28);
    *(volatile s32 *)&self->f = zero;
    *(volatile s32 *)&self->a = zero;
    *(volatile s32 *)&self->b = zero;
    *(volatile s32 *)&self->c = zero;
    *(volatile u8 *)&self->flag = zero;
    *(volatile s32 *)&self->e = zero;
    return self;
}
