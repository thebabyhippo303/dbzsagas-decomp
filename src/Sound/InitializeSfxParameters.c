/* Sound__InitializeSfxParameters @ 0x80022298 (size: 0x1A0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80188980(int);
M2C_UNK fn_801889B0(M2C_UNK, f32, f32);             /* extern */
M2C_UNK fn_80188A38(s32);                           /* extern */
M2C_UNK fn_80188B2C();                              /* extern */
extern f32 lbl_803104D8 __attribute__((section(".data")));
extern f32 lbl_803104DC __attribute__((section(".data")));
extern f32 lbl_803104E0 __attribute__((section(".data")));
extern f32 lbl_803104E4 __attribute__((section(".data")));
extern f32 lbl_803104E8 __attribute__((section(".data")));
extern s32 lbl_803B1E94 __attribute__((section(".data")));

void Game__InitializeAudioCategoryVolumes(void) {
    fn_801889B0(0, lbl_803104D8, lbl_803104DC);
    fn_801889B0(1, lbl_803104E0, lbl_803104DC);
    fn_801889B0(2, lbl_803104D8, lbl_803104DC);
    fn_801889B0(3, lbl_803104E0, lbl_803104DC);
    fn_801889B0(4, lbl_803104D8, lbl_803104DC);
    fn_801889B0(5, lbl_803104D8, lbl_803104DC);
    fn_801889B0(6, lbl_803104E4, lbl_803104DC);
    fn_801889B0(7, lbl_803104E4, lbl_803104DC);
    fn_801889B0(8, lbl_803104D8, lbl_803104DC);
    fn_801889B0(9, lbl_803104D8, lbl_803104DC);
    fn_801889B0(0xA, lbl_803104D8, lbl_803104DC);
    fn_801889B0(0xB, lbl_803104D8, lbl_803104DC);
    fn_801889B0(0xC, lbl_803104E8, lbl_803104DC);
    fn_801889B0(0xD, lbl_803104E8, lbl_803104DC);
    fn_801889B0(0xE, lbl_803104D8, lbl_803104DC);
    fn_801889B0(0xF, lbl_803104D8, lbl_803104DC);
    fn_801889B0(0x10, lbl_803104DC, lbl_803104DC);
    fn_801889B0(0x11, lbl_803104DC, lbl_803104DC);
    fn_801889B0(0x12, lbl_803104DC, lbl_803104DC);
    fn_801889B0(0x13, lbl_803104E8, lbl_803104DC);
    fn_801889B0(0x13, lbl_803104DC, lbl_803104DC);
    fn_80188980(0);
    fn_80188A38(lbl_803B1E94);
    fn_80188B2C();
}

