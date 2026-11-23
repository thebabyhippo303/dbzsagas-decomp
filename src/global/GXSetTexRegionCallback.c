/* GXSetTexRegionCallback @ 0x802E46E8 (size: 0x14, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern void *__GXData;
s32 GXSetTexRegionCallback(s32 arg0) {
    s32 *p = (s32 *)__GXData;
    s32 old;
    p += 306;
    old = *p;
    *p = arg0;
    return old;
}
