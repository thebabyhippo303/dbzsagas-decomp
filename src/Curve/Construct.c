/* Curve__Construct @ 0x800E04B4 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_800E0500(void *, s32, s32, s32);         /* extern */
extern M2C_UNK lbl_80332DB0 __attribute__((section(".data")));

M2C_UNK **Curve__Construct(M2C_UNK **arg0, void *arg1) {
    *(volatile M2C_UNK **)arg0 = &lbl_80332DB0;
    fn_800E0500(arg0, M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg1, s32 *, 0xC), M2C_FIELD(arg1, s32 *, 0) & 0x30);
    return arg0;
}
