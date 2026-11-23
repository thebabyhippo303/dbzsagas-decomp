/* SurfacePairMap__Destroy @ 0x801F861C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_80254DF8(void *, unsigned int);
void SurfacePairMap__Clear(void *);
extern M2C_UNK lbl_80344878 __attribute__((section(".data")));

void SurfacePairMap__Destroy(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &lbl_80344878;
    SurfacePairMap__Clear(arg0);
    fn_80254DF8(arg0, arg1);
}
