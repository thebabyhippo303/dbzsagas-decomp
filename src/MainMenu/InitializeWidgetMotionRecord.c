/* MainMenu__InitializeWidgetMotionRecord @ 0x8012EA20 (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ((type)(expr))

void MainMenu__UpdateAnimatedWidgetTransform(s32);
extern f32 lbl_8032A8A4 __attribute__((section(".data")));
extern f32 lbl_8032A8A8;
extern f32 lbl_8032A8AC;
extern f32 lbl_8032A8B0;
extern s32 *lbl_803DC3B4;

void MainMenu__InitializeWidgetMotionRecord(void *arg0, f32 farg0, f64 farg1, f32 farg2, f32 farg3) {
    void *temp_r11;
    void *temp_r11_b;
    void *temp_r29;
    void *temp_r9;
    f32 ld_1A8;

    temp_r29 = 0x1A0 + arg0;
    M2C_FIELD(arg0, s32 *, 0x1B8) = (s32) *lbl_803DC3B4;
    M2C_FIELD(arg0, s32 *, 0x1BC) = 0;
    M2C_FIELD(arg0, f32 *, 0x1A0) = farg0;
    M2C_FIELD(temp_r29, f32 *, 4) = farg1;
    ld_1A8 = M2C_FIELD(arg0, f32 *, 0x1A8);
    ld_1A8 = farg2;
    ld_1A8 = M2C_FIELD(arg0, f32 *, 0x1B0);
    ld_1A8 = lbl_8032A8A4;
    M2C_FIELD(arg0, f32 *, 0x1AC) = farg3;
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK), 0x14)(M2C_FIELD(temp_r9, s16 *, 0x10) + arg0, M2C_FIELD(arg0, s32 *, 0x1B8), M2C_FIELD(arg0, s32 *, 0x1BC), 0, 1, 1);
    temp_r11 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r11, M2C_UNK (**)(void *, f32, f32), 0x10C)(arg0 + M2C_FIELD(temp_r11, s16 *, 0x108), lbl_8032A8A8, lbl_8032A8A8);
    temp_r11_b = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r11_b, M2C_UNK (**)(void *, f32, f32), 0xEC)(arg0 + M2C_FIELD(temp_r11_b, s16 *, 0xE8), lbl_8032A8AC, lbl_8032A8B0);
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32), 0xAC)(M2C_FIELD(temp_r9, s16 *, 0xA8) + arg0, M2C_FIELD(arg0, f32 *, 0x1A0), M2C_FIELD(temp_r29, f32 *, 4));
    MainMenu__UpdateAnimatedWidgetTransform(arg0);
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1D4)(arg0 + M2C_FIELD(temp_r9, u16 *, 0x1D0));
}
