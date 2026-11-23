/* SphereText__Construct @ 0x80270450 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void *Sphere__Construct(void *);
void *EzString__Construct(void *);
void SphereText__ResetProperties(void *);
extern char lbl_8034DB20[];
void *SphereText__Construct(void *arg0) {
    register int zero;

    Sphere__Construct(arg0);
    M2C_FIELD(arg0, void **, 0x19C) = lbl_8034DB20;
    EzString__Construct(arg0 + 0x1A4);
    M2C_FIELD(arg0, s32 *, 0x168) = 1;
    SphereText__ResetProperties(arg0);
    zero = 0;
    M2C_FIELD(arg0, s32 *, 0x1E0) = zero;
    M2C_FIELD(arg0, s32 *, 0x1E4) = zero;
    M2C_FIELD(arg0, s32 *, 0x1E8) = zero;
    M2C_FIELD(arg0, s32 *, 0x1EC) = zero;
    M2C_FIELD(arg0, s32 *, 0x1F0) = zero;
    return arg0;
}
