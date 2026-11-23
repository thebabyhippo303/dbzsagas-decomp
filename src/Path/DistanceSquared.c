/* Path__DistanceSquared @ 0x801FC8BC (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_80345054 __attribute__((section(".data")));

typedef struct { f32 x, y, z; } PVec3;

f32 Path__DistanceSquared(void *arg0, void *arg1, void *arg2) {
    PVec3 d;
    PVec3 *dp = &d;
    PVec3 *a = (PVec3 *)arg1;
    PVec3 *b = (PVec3 *)arg2;

    d.x = b->x - a->x;
    dp->y = b->y - a->y;
    dp->z = b->z - a->z;
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        dp->y = lbl_80345054;
    }
    {
        f32 y = dp->y;
        f32 z = dp->z;
        return d.x * d.x + y * y + z * z;
    }
}
