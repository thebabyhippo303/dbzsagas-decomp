/* DynamicBoneChain__Construct @ 0x801EAA64 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK BoneChain__ConstructBase();                 /* extern */
extern M2C_UNK lbl_80344BE8 __attribute__((section(".data")));

void *DynamicBoneChain__Construct(void *arg0) {
    BoneChain__ConstructBase();
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80344BE8;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;

    return arg0;
}
