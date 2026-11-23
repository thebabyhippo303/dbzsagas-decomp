/* BoneChain__Construct @ 0x801DBA7C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_801EAA64();
extern f32 lbl_803439B8 __attribute__((section(".data")));
extern M2C_UNK lbl_80344BA0 __attribute__((section(".data")));

void *BoneChain__Construct(void *arg0) {
    fn_801EAA64();
    M2C_FIELD(arg0, f32 *, 0x180) = (f32) lbl_803439B8;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80344BA0;
    M2C_FIELD(arg0, s32 *, 0x17C) = 0;
    M2C_FIELD(arg0, s32 *, 0x184) = 0;
    return arg0;
}
