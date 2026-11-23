/* AnimScript__OpTestAnimFinished @ 0x80235EBC (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

typedef struct { char pad[240]; void *threads[1]; } AnimState;

s32 Animation__IsFinished(void *);

s32 AnimScript__OpTestAnimFinished(AnimState *state, s32 idx, s32 *pc) {
    s32 res;
    if ((state->threads[idx] != NULL) && ((s32)M2C_FIELD(M2C_FIELD(state->threads[idx], void **, 28), s32 *, 56) != 0)) {
        *pc += 4;
    }
    res = Animation__IsFinished((char *)state + 264);
    if (res) {
        M2C_FIELD(state->threads[idx], s32 *, 20) = 1;
    } else {
        M2C_FIELD(state->threads[idx], s32 *, 20) = res;
    }
    return 0;
}
