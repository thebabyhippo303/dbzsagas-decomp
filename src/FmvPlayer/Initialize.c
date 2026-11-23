/* FmvPlayer__Initialize @ 0x801D920C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_802E0D1C();                              /* extern */
M2C_UNK fn_802E2464();                              /* extern */
M2C_UNK fn_802E285C();                              /* extern */
M2C_UNK fn_802EC5D4(M2C_UNK *, s32 *);              /* extern */
M2C_UNK fn_802EFE1C(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK Fmv__BinkAlloc __attribute__((section(".data")));
extern M2C_UNK Fmv__BinkFree __attribute__((section(".data")));
extern M2C_UNK fn_802EC520 __attribute__((section(".data")));
extern M2C_UNK lbl_80343490 __attribute__((section(".data")));
extern s32 lbl_803DCC84;
extern f32 lbl_803DD54C;
extern s32 lbl_803DD550;
extern s16 lbl_803DD554;
extern s32 lbl_803DD558;

s32 FmvPlayer__Initialize(s32 arg1, s32 arg2, f32 farg0) {
    s32 spC;
    s32 sp8;

    lbl_803DCC84 = arg1;
    sp8 = M2C_FIELD(&lbl_80343490, s32 *, 0);
    spC = M2C_FIELD(&lbl_80343490, s32 *, 4);
    fn_802EFE1C(&Fmv__BinkAlloc, &Fmv__BinkFree, &lbl_80343490);
    lbl_803DD54C = farg0;
    lbl_803DD550 = 0;
    fn_802EC5D4(&fn_802EC520, &sp8);
    lbl_803DD554 = 0;
    lbl_803DD558 = arg2;
    fn_802E2464();
    fn_802E0D1C();
    fn_802E285C();
    return 1;
}
