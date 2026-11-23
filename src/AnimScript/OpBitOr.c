/* AnimScript__OpBitOr @ 0x80237FB8 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* WIP 92.3% same-size: AnimScript__OpBitOr @ 0x80237FB8. Wall: or-dest (ours r0, target r11) + stwx rA/rB (ours base,idx; target idx,base). Keys: AnimState struct + state->threads[idx]; u8 b + s8 sb/sd + o1/o0 temps + (char*)+o loads (base-first lwzx); stack loaded BEFORE b (fixes thread/b/dec/ext/scale/load coloring); off-first/res-var/idx-store do NOT fix or/stwx. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
typedef struct { char pad[0xF0]; void *threads[1]; } AnimState;
s32 AnimScript__OpBitOr(AnimState *state, s32 idx, s32 *pc) {
    void *thread = state->threads[idx];
    s32 *stack;
    u8 b;
    s32 dec;
    s8 sd;
    s8 sb;
    s32 o1;
    s32 o0;
    s32 v0;
    s32 v1;
    if ((thread != NULL) && (M2C_FIELD(M2C_FIELD(thread, void **, 0x1C), s32 *, 0x38) != 0)) {
        *pc += 4;
    }
    stack = M2C_FIELD(thread, s32 **, 48);
    b = M2C_FIELD(thread, u8 *, 8);
    dec = b - 1;
    M2C_FIELD(thread, u8 *, 8) = dec;
    sb = (s8)b;
    sd = (s8)dec;
    o1 = (s32)sb * 4;
    o0 = (s32)sd * 4;
    v1 = *(s32 *)((char *)stack + o1);
    v0 = *(s32 *)((char *)stack + o0);
    *(s32 *)((char *)stack + o0) = v0 | v1;
    return 0;
}
