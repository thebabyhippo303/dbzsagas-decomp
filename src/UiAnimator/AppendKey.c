/* UiAnimator__AppendKey @ 0x80260410 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef void (*AppendFn)(void *, f32);

void UiAnimator__AppendKey(void *self, f32 arg) {
    void *itable = M2C_FIELD(self, void **, 0x2C);
    f32 base = M2C_FIELD(self, f32 *, 0xC);
    s32 adj = M2C_FIELD(itable, s16 *, 0x58);
    AppendFn fn = M2C_FIELD(itable, AppendFn *, 0x5C);

    fn((char *) self + adj, base + arg);
}
