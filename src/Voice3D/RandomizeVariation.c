/* Voice3D__RandomizeVariation @ 0x8019C21C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Voice__RandomizeVariation(void *);
f32 SoundDef__GetDefaultParam(void *);
extern f32 lbl_8033FBA0 __attribute__((section(".data")));

void Voice3D__RandomizeVariation(void *arg0) {
    Voice__RandomizeVariation(arg0);
    if (!(__builtin_fabsf(M2C_FIELD(arg0, f32 *, 0x98)) >= lbl_8033FBA0)) {
        M2C_FIELD(arg0, f32 *, 0x98) = SoundDef__GetDefaultParam(M2C_FIELD(arg0, void **, 4));
    }
}
