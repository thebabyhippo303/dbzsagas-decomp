/* StreamQueue__GetStreamError @ 0x801954AC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 StreamQueue__GetStreamError(void *arg0) {
    void *t = M2C_FIELD(arg0, void **, 128);
    void *u;
    s32 adj;
    s32 (*fn)(void *);
    if (t != NULL) {
        u = M2C_FIELD(t, void **, 40);
        adj = M2C_FIELD(u, s16 *, 72);
        fn = M2C_FIELD(u, s32 (**)(void *), 76);
        return fn((char *)t + adj);
    }
    return 0;
}
