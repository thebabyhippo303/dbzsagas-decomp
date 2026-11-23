/* AnimScript__OpTestActorFlags @ 0x80236D3C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { char pad[240]; void *threads[1]; } AnimState;

s32 AnimScript__OpTestActorFlags(AnimState *state, s32 idx, s32 *pc) {
    void *thread = state->threads[idx];
    u8 depth;
    s32 *stack;
    s32 d;
    s32 mask;

    if ((thread != NULL) && (M2C_FIELD(M2C_FIELD(thread, void **, 0x1C), s32 *, 0x38) != 0)) {
        *pc += 4;
    }
    depth = M2C_FIELD(thread, u8 *, 8);
    stack = M2C_FIELD(thread, s32 **, 0x30);
    M2C_FIELD(thread, u8 *, 8) = (u8)(depth - 1);
    d = (s32)(s8)depth;
    mask = stack[d];
    M2C_FIELD(state->threads[idx], u32 *, 20) = M2C_FIELD(state, u32 *, 260) & (u32)mask;
    return 0;
}
