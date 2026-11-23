/* BaseMenu__FocusRoot @ 0x802637CC (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32;
#define M2C_FIELD(e,t,o) (*(t)((char*)(e)+(o)))
typedef void (*FocusFn)(void *, void *);
void BaseMenu__FocusRoot(void *self) {
    while (M2C_FIELD(self, void **, 0x8C) != 0 &&
           *(void **)M2C_FIELD(self, void **, 0x8C) != 0) {
        void *vt = M2C_FIELD(self, void **, 0x10);
        s16 adjust = M2C_FIELD(vt, s16 *, 0x1A8);
        FocusFn fn = M2C_FIELD(vt, FocusFn *, 0x1AC);
        fn((char *)self + adjust, M2C_FIELD(self, void **, 0x8C));
    }
}