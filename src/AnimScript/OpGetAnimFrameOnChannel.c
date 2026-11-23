/* AnimScript__OpGetAnimFrameOnChannel @ 0x802398EC (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[240]; void *threads[1]; } AnimState;

s32 Animation__GetFrame(void *);

s32 AnimScript__OpGetAnimFrameOnChannel(AnimState *state, s32 idx, s32 *pc) {
    void *th;
    u8 ch;
    u32 tab;
    s32 ci;
    s32 res;

    th = state->threads[idx];
    if ((th != NULL) && ((s32) M2C_FIELD(M2C_FIELD(th, void **, 28), s32 *, 56) != 0)) {
        *pc += 4;
    }
    ch = M2C_FIELD(th, u8 *, 8);
    tab = M2C_FIELD(th, u32 *, 48);
    M2C_FIELD(th, u8 *, 8) = ch - 1;
    ci = *(s32 *)(tab + (s32) (s8) ch * 4);
    res = Animation__GetFrame((char *) state + (ci * 20 + 264));
    M2C_FIELD(state->threads[idx], s32 *, 20) = res;
    return 0;
}
