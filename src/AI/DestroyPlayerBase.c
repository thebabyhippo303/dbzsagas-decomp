/* AI__DestroyPlayerBase @ 0x80075BB0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__DestroyBase(void *, s32);
extern M2C_UNK lbl_803316C8 __attribute__((section(".data")));
extern s32 lbl_803DC438;

void AI__DestroyPlayerBase(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x57C) = &lbl_803316C8;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x420) == 0) {
        lbl_803DC438 = M2C_FIELD(arg0, s32 *, 0x424);
    }
    AI__DestroyBase(arg0, arg1);
}
