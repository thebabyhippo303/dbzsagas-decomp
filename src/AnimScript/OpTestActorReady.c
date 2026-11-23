/* AnimScript__OpTestActorReady @ 0x80237238 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { char pad[240]; void *threads[1]; } AnimState;
s32 AnimScript__OpTestActorReady(AnimState *arg0, s32 arg1, s32 *arg2) {
    void *t;
    t = arg0->threads[arg1];
    if ((t != NULL) && (M2C_FIELD(M2C_FIELD(t, void **, 0x1C), s32 *, 0x38) != 0)) {
        *arg2 += 4;
    }
    M2C_FIELD(arg0->threads[arg1], s32 *, 0x14) = *(s32 *)((char *)arg0 + 0x104) & 0x10000000;
    return 0;
}
