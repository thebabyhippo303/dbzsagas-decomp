/* AnimScript__OpGetAnimFrame @ 0x80236C00 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

typedef struct { char pad[240]; void *threads[1]; } AnimState;

extern s32 Animation__GetFrame(void *arg);

s32 AnimScript__OpGetAnimFrame(AnimState *state, s32 idx, s32 *pc) {
    s32 fr;
    if ((state->threads[idx] != NULL) && ((s32) M2C_FIELD(M2C_FIELD(state->threads[idx], void **, 0x1C), s32 *, 0x38) != 0)) {
        *pc += 4;
    }
    fr = Animation__GetFrame((char *) state + 264);
    M2C_FIELD(state->threads[idx], s32 *, 20) = fr;
    return 0;
}
