/* UiAnimator__SetHoldRange @ 0x8026036C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

typedef void (*HoldFn)(void *, f32, f32);

void UiAnimator__SetHoldRange(void *self, f32 a, f32 b, f32 c) {
    void *vt;
    HoldFn fn;
    vt = M2C_FIELD(self, void **, 44);
    fn = M2C_FIELD(vt, HoldFn *, 0x7C);
    fn((char *)self + M2C_FIELD(vt, s16 *, 0x78), a, b);
    vt = M2C_FIELD(self, void **, 44);
    fn = M2C_FIELD(vt, HoldFn *, 0x5C);
    fn((char *)self + M2C_FIELD(vt, s16 *, 0x58), a, c);
    vt = M2C_FIELD(self, void **, 44);
    fn = M2C_FIELD(vt, HoldFn *, 0x5C);
    fn((char *)self + M2C_FIELD(vt, s16 *, 0x58), b, c);
}
