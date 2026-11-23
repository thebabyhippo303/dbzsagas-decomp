/* AnimScript__OpEnableChannelFlag @ 0x8023981C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8;
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { char pad[240]; void *threads[1]; } AnimState;
s32 AnimScript__OpEnableChannelFlag(AnimState *state, s32 idx, s32 *pc) {
    void *thread = state->threads[idx];
    u8 b;
    s32 *chanbase;
    volatile s32 *stack;
    s32 i;
    s32 v;
    s32 off;
    if ((thread != NULL) && (M2C_FIELD(M2C_FIELD(thread, void **, 0x1C), s32 *, 0x38) != 0)) {
        *pc += 4;
    }
    b = M2C_FIELD(thread, u8 *, 8);
    chanbase = (s32 *)((char *)state + 0x110);
    stack = M2C_FIELD(thread, volatile s32 **, 0x30);
    M2C_FIELD(thread, u8 *, 8) = (u8)(b - 1);
    i = (s32)(s8)b;
    v = stack[i];
    off = v * 20;
    M2C_FIELD(chanbase, s32 *, off) |= 1;
    return 0;
}
