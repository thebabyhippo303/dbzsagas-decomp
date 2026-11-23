/* AnimScript__OpSetLabel @ 0x80235D8C (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
typedef struct { char pad[240]; void * volatile threads[1]; } AnimState;

s32 AnimScript__OpSetLabel(AnimState *state, s32 idx, s32 *pc) {
    void *thread = state->threads[idx];
    u8 b;
    s32 v;
    if ((thread != NULL) && ((s32) M2C_FIELD(M2C_FIELD(thread, void **, 0x1C), s32 *, 0x38) != 0)) {
        *pc += 4;
    }
    b = M2C_FIELD(thread, u8 *, 8);
    M2C_FIELD(thread, u8 *, 8) = (u8) (b - 1);
    v = M2C_FIELD(thread, volatile s32 **, 48)[(s32) (s8) b];
    M2C_FIELD(state->threads[idx], u16 *, 10) = v;
    return 0;
}
