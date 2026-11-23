/* AnimScript__SetLabelAddress @ 0x802346CC (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef struct { char pad[240]; void *threads[1]; } AnimState;
s32 AnimScript__SetLabelAddress(AnimState *state, s32 idx, s32 label) {
    s32 base;
    s32 tbl;
    if (state->threads[idx] != NULL) {
        base = M2C_FIELD(M2C_FIELD(state->threads[idx], void **, 0x1C), s32 *, 0x20);
    } else {
        base = 0;
    }
    if (state->threads[idx] != NULL) {
        tbl = M2C_FIELD(M2C_FIELD(state->threads[idx], void **, 0x1C), s32 *, 0x20);
    } else {
        tbl = 0;
    }
    M2C_FIELD(state->threads[idx], s32 *, 0xC) = base + ((s32 *)tbl)[label];
    M2C_FIELD(state->threads[idx], s32 *, 0x10) = 0;
    return tbl;
}
