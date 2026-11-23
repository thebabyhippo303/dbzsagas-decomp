/* SpatialGrid__GetEntry @ 0x8025F728 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *SpatialGrid__GetEntry(void *arg0, s32 arg1) {
    void *table;
    s32 count;
    void **slot;
    s32 idx = arg1;
    if (idx < 0) {
        goto ret_null;
    }
    table = M2C_FIELD(arg0, void **, 0x20);
    count = M2C_FIELD(table, s32 *, 4);
    if (idx < count) {
        goto compute;
    }
ret_null:
    return NULL;
compute:
    if (idx < 0) {
        idx = count - 1;
    }
    if (idx >= count) {
        slot = NULL;
    } else if (count == 0) {
        slot = NULL;
    } else {
        slot = M2C_FIELD(table, void ***, 0) + idx;
    }
    return *slot;
}
