/* AnimeFaceZoomOut__Construct @ 0x80023830 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;
void *fn_80184348(int);
extern f32 lbl_80310FA8 __attribute__((section(".data")));
extern f32 lbl_80310FAC __attribute__((section(".data")));
extern int lbl_80335A38 __attribute__((section(".data")));
extern int lbl_80335B58 __attribute__((section(".data")));
void *AnimeFaceZoomOut__Construct(void *self) {
    register int zero = 0;
    register int eight = 8;
    f32 a;
    f32 b;
    void *p18 = (char *)self + 0x18;
    void *p24 = (char *)self + 0x24;
    *(volatile void **)((char *)self + 0x3C) = &lbl_80335B58;
    a = lbl_80310FA8;
    b = lbl_80310FAC;
    *(volatile f32 *)((char *)self + 0x18) = a;
    *(volatile f32 *)((char *)p18 + 8) = a;
    *(volatile f32 *)((char *)p18 + 4) = b;
    *(void **)p24 = fn_80184348(0x20);
    *(volatile int *)((char *)p24 + 0x14) = zero;
    *(volatile int *)((char *)p24 + 0x0C) = eight;
    *(volatile int *)((char *)p24 + 4) = zero;
    *(volatile int *)((char *)p24 + 8) = eight;
    *(volatile int *)((char *)p24 + 0x10) = zero;
    *(volatile void **)((char *)self + 0x3C) = &lbl_80335A38;
    return self;
}
