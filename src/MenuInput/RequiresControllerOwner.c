/* MenuInput__RequiresControllerOwner @ 0x80007D44 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern void *lbl_803DC3C0;

s32 MenuInput__RequiresControllerOwner(void) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(lbl_803DC3C0, void **, 0x238);
    if ((s32) M2C_FIELD(temp_r9, s32 *, 0x1C) != 5) goto fail;
    if ((s32) M2C_FIELD(temp_r9, s32 *, 0x10) != 2) goto fail;
    return 1;
fail:
    return 0;
}
