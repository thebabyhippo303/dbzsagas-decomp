/* MultiMessagePanel__SetMessage @ 0x8026A420 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef void (*Func876)(void *, void *);
void MultiMessagePanel__SetMessage(void *arg0, s32 arg1, void *arg2) {
    void *text = arg2;
    s32 off = arg1 * 500;
    void *l = (void *)(off + (s32)arg0);
    s32 off2 = off + 23916;
    void *inner = M2C_FIELD(l, void **, 24328);
    void *a = (char *)arg0 + off2 + M2C_FIELD(inner, short *, 872);
    ((Func876)M2C_FIELD(inner, void **, 876))(a, text);
}
