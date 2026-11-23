/* AnimScript__OpTestAnimFinishedFlag @ 0x80236E28 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

typedef struct { char pad[240]; void *threads[1]; } AnimState;

s32 Animation__IsFinished(void *);

s32 AnimScript__OpTestAnimFinishedFlag(AnimState *state, s32 idx, s32 *pc) {
    s32 res;
    if ((state->threads[idx] != NULL) && ((s32) M2C_FIELD(M2C_FIELD(state->threads[idx], void **, 28), s32 *, 56) != 0)) {
        *pc += 4;
    }
    res = Animation__IsFinished((char *) state + 264);
    M2C_FIELD(state->threads[idx], s32 *, 20) = res;
    return 0;
}
