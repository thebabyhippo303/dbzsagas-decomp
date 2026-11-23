/* AnimScript__OpTestLabelGroup @ 0x80236DAC (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[240]; void *threads[1]; } AnimState;

s32 AnimScript__OpTestLabelGroup(AnimState *state, s32 idx, s32 *pc) {
    void *thread = state->threads[idx];
    u8 b;
    s16 h;
    s32 t;
    if ((thread != NULL) && ((s32) M2C_FIELD(M2C_FIELD(thread, void **, 0x1C), s32 *, 0x38) != 0)) {
        *pc += 4;
    }
    b = M2C_FIELD(thread, u8 *, 8);
    M2C_FIELD(thread, u8 *, 8) = (u8) (b - 1);
    h = M2C_FIELD(state->threads[idx], s16 *, 10);
    t = M2C_FIELD(thread, s32 **, 48)[(s32) (s8) b];
    M2C_FIELD(state->threads[idx], s32 *, 20) = ((h & 0xFF00) == (s16) t);
    return 0;
}
