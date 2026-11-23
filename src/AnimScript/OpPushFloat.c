/* AnimScript__OpPushFloat @ 0x80237534 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[240]; void *threads[1]; } AnimState;

s32 AnimScript__OpPushFloat(AnimState *state, s32 idx, f32 **ppc) {
    void *thread = state->threads[idx];
    f32 f;
    u8 b;
    u8 b2;
    u8 two;
    if ((thread != NULL) && ((s32) M2C_FIELD(M2C_FIELD(thread, void **, 0x1C), s32 *, 0x38) != 0)) {
        *ppc = (f32 *)((char *)*ppc + 4);
    }
    two = 2;
    f = **ppc;
    *ppc = (f32 *)((char *)*ppc + 4);
    b = M2C_FIELD(thread, u8 *, 8);
    M2C_FIELD(thread, u8 *, 8) = b + 1;
    M2C_FIELD(thread, u8 **, 52)[(s32) (s8) (b + 1)] = two;
    b2 = M2C_FIELD(thread, u8 *, 8);
    M2C_FIELD(thread, f32 **, 48)[(s32) (s8) b2] = f;
    return 0;
}
