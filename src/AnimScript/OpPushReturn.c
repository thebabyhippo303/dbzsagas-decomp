/* AnimScript__OpPushReturn @ 0x80239D00 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { char pad[32]; s32 w32; char pad2[20]; s32 f56; } Aux;
typedef struct {
    char pad[8];
    u8 b8;
    u8 b9;
    char pad2[18];
    Aux *aux;
    char pad3[24];
    u32 *vals;
} Thread;
typedef struct { char pad[240]; Thread *threads[1]; } AnimState;

s32 AnimScript__OpPushReturn(AnimState *state, s32 idx, u32 **ppc) {
    Thread *thread = state->threads[idx];
    u32 v;
    u8 b;
    if ((thread != NULL) && (thread->aux->f56 != 0)) {
        *ppc = *ppc + 1;
    }
    v = **ppc;
    *ppc = *ppc + 1;
    b = thread->b9;
    thread->b9 = b + 1;
    thread->vals[(s32)(s8)(b + 1)] = v;
    return 0;
}
