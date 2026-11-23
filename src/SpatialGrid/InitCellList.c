/* SpatialGrid__InitCellList @ 0x8025FBEC (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void SpatialGrid__InitCellList(void *arg0, s32 arg1, s32 arg2) {
    s32 i = 0;
    s32 off;
    s32 zero;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    if (i >= arg2) {
        return;
    }
    zero = 0;
    off = 0;
    do {
        i += 1;
        *(s32 *)(off + M2C_FIELD(arg0, s32 *, 0)) = zero;
        off += 4;
    } while (i < M2C_FIELD(arg0, s32 *, 4));
}
