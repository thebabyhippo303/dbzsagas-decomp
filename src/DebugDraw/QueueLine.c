/* DebugDraw__QueueLine @ 0x80244F44 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef struct { s32 x, y, z; } Vec3i;
typedef struct { Vec3i a, b; s32 col; } Line;
extern u32 lbl_803DCDCC;
extern Line lbl_803B14B8[];
void DebugDraw__QueueLine(Vec3i *p0, Vec3i *p1, s32 *col) {
    Line *L;
    if (lbl_803DCDCC > 31) {
        return;
    }
    L = &lbl_803B14B8[lbl_803DCDCC++];
    L->a = *p0;
    L->b = *p1;
    L->col = *col;
}
