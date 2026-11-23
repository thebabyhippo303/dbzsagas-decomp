/* AnimScript__OpTestAnimLoop @ 0x8023701C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: AnimScript__OpTestAnimLoop @ 0x8023701C (0x78). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

typedef struct { char pad[240]; void *threads[1]; } AnimState;

extern s32 Animation__TryLoop(void *arg);

s32 AnimScript__OpTestAnimLoop(AnimState *state, s32 idx, s32 *pc) {
    s32 res;
    if ((state->threads[idx] != NULL) && ((s32) M2C_FIELD(M2C_FIELD(state->threads[idx], void **, 0x1C), s32 *, 0x38) != 0)) {
        *pc += 4;
    }
    res = Animation__TryLoop((char *) state + 264);
    M2C_FIELD(state->threads[idx], s32 *, 20) = res;
    return 0;
}
