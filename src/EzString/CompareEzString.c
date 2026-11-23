/* EzString__CompareEzString @ 0x80270294 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EzString__CompareEzString(void *a, void *b) {
    void *u2 = M2C_FIELD(b, void **, 8);
    void *aa = a;
    void *u1 = M2C_FIELD(aa, void **, 8);
    s32 adj2 = M2C_FIELD(u2, s16 *, 72);
    s32 (*fn2)(void *) = M2C_FIELD(u2, s32 (**)(void *), 76);
    void *t1 = (char *)u1 + 128;
    void *th2 = (char *)b + adj2;
    s32 adj1 = M2C_FIELD(u1, s16 *, 128);
    void *th1 = (char *)aa + adj1;
    s32 r = fn2(th2);
    s32 (*fn1b)(void *, s32) = M2C_FIELD(t1, s32 (**)(void *, s32), 4);
    return fn1b(th1, r);
}
