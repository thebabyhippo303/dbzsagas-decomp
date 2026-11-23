/* SurfSurf__Destroy @ 0x801A87CC (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SurfSurf__FreeCells(void *);
void fn_8025545C(void *, void *);
void SurfSurfTable__Destroy(void *, s32);
extern M2C_UNK lbl_80340DC0 __attribute__((section(".data")));
extern M2C_UNK lbl_80340E40 __attribute__((section(".data")));

void SurfSurf__Destroy(void *arg0, void *arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &lbl_80340DC0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &lbl_80340E40;
    SurfSurf__FreeCells(arg0);
    SurfSurfTable__Destroy((char *) arg0 + 0xC, 0);
    fn_8025545C(arg0, arg1);
}
