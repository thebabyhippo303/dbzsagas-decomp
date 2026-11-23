/* Protagonist__SaveMoveTowardTargetFullState @ 0x8015A11C (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Protagonist__SaveMoveTowardTargetFullState(void *dst, void *src) {
    char *d20;
    char *s8;
    char *d28;
    char *s20;
    s32 t4;
    char *d40;
    char *s56;
    char *d76;
    s32 t8;
    s32 p1h;
    s32 p1l;
    s32 t20;
    s32 p2h;
    s32 p2l;
    s32 t56;
    s32 p3h;
    s32 p3l;

    M2C_FIELD(dst, s32 *, 0) = 1;
    d20 = (char *)dst + 20;
    s8 = (char *)src + 8;
    d28 = (char *)dst + 28;
    s20 = (char *)src + 20;
    t4 = M2C_FIELD(src, s32 *, 4);
    d40 = (char *)dst + 40;
    s56 = (char *)src + 56;
    d76 = (char *)dst + 76;
    M2C_FIELD(d20, s32 *, 4) = t4;
    t8 = M2C_FIELD(src, s32 *, 8);
    p1l = M2C_FIELD(s8, s32 *, 4);
    p1h = M2C_FIELD(s8, s32 *, 8);
    M2C_FIELD(dst, s32 *, 28) = t8;
    M2C_FIELD(d28, s32 *, 4) = p1l;
    M2C_FIELD(d28, s32 *, 8) = p1h;
    t20 = M2C_FIELD(src, s32 *, 20);
    p2l = M2C_FIELD(s20, s32 *, 4);
    p2h = M2C_FIELD(s20, s32 *, 8);
    M2C_FIELD(dst, s32 *, 40) = t20;
    M2C_FIELD(d40, s32 *, 4) = p2l;
    M2C_FIELD(d40, s32 *, 8) = p2h;
    M2C_FIELD(d20, u16 *, 32) = M2C_FIELD(src, u16 *, 32);
    M2C_FIELD(d20, u8 *, 34) = M2C_FIELD(src, u8 *, 34);
    M2C_FIELD(d20, f32 *, 36) = M2C_FIELD(src, f32 *, 36);
    M2C_FIELD(d20, s32 *, 40) = M2C_FIELD(src, s32 *, 40);
    M2C_FIELD(d20, s32 *, 48) = M2C_FIELD(src, s32 *, 48);
    M2C_FIELD(d20, f32 *, 52) = M2C_FIELD(src, f32 *, 52);
    t56 = M2C_FIELD(src, s32 *, 56);
    p3l = M2C_FIELD(s56, s32 *, 4);
    p3h = M2C_FIELD(s56, s32 *, 8);
    M2C_FIELD(dst, s32 *, 76) = t56;
    M2C_FIELD(d76, s32 *, 4) = p3l;
    M2C_FIELD(d76, s32 *, 8) = p3h;
}
