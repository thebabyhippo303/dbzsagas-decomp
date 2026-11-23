/* AnimScript__OpRandomInt @ 0x80236B78 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { char pad[240]; void *threads[1]; } AnimState;

s32 Rand__RangeInt(void *, s32, s32);
extern s32 lbl_803DD634;

s32 AnimScript__OpRandomInt(AnimState *state, s32 idx, s32 *pc) {
    void *th;
    u8 ch;
    u32 tab;
    s32 ci;

    th = state->threads[idx];
    if ((th != NULL) && ((s32) M2C_FIELD(M2C_FIELD(th, void **, 28), s32 *, 56) != 0)) {
        *pc += 4;
    }
    ch = M2C_FIELD(th, u8 *, 8);
    tab = M2C_FIELD(th, u32 *, 48);
    M2C_FIELD(th, u8 *, 8) = ch - 1;
    ci = *(s32 *)(tab + (s32) (s8) ch * 4);
    M2C_FIELD(th, s32 *, 20) = Rand__RangeInt(&lbl_803DD634, 0, ci - 1);
    return 0;
}
