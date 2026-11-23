/* SurfaceMap__SetDefaultSurfaceByName @ 0x801EAA1C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
s32 EnumTable__FindByName(void *, char *, s32);
void SurfaceMap__SetDefaultSurface(void *, s32);
extern void *lbl_803DCCC0;
void SurfaceMap__SetDefaultSurfaceByName(void *arg0, char *arg1) {
    s32 idx = EnumTable__FindByName(lbl_803DCCC0, arg1, -1);
    if (idx < 0)
        idx = 0;
    SurfaceMap__SetDefaultSurface(arg0, idx);
}
