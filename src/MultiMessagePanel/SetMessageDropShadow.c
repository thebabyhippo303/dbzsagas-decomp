/* MultiMessagePanel__SetMessageDropShadow @ 0x8026A528 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef void (*Func540)(void *, void *, void *, void *, void *);
void MultiMessagePanel__SetMessageDropShadow(void *arg0, s32 arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    s32 off = arg1 * 500;
    void *l = (void *)(off + (s32)arg0);
    s32 off2 = off + 23916;
    void *inner = M2C_FIELD(l, void **, 24328);
    void *a = (char *)arg0 + off2 + M2C_FIELD(inner, short *, 536);
    ((Func540)M2C_FIELD(inner, void **, 540))(a, arg2, arg3, arg4, arg5);
}
