/* MainMenu__InitializeWidgetAnimationPositions @ 0x8013032C (size: 0x1C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void MainMenu__SetWidgetMotionEndpoints(void *, float, float, float, float);
void fn_8026C634(void *, float, float);
extern f32 lbl_8032A9B4;

void MainMenu__InitializeWidgetAnimationPositions(void *arg0) {
    s16 ld_238;
    f32 temp_f30;
    f32 temp_f31;
    f32  temp_f31_b;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_5;

    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    temp_f31 = M2C_FIELD(temp_r9, f32 (**)(void *), 0x234)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x230));
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    fn_8026C634(arg0 + 0x1A0, temp_f31, M2C_FIELD(temp_r9_2, f32 (**)(void *), 0x23C)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x238)));
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    MainMenu__SetWidgetMotionEndpoints(arg0 + 0x340, lbl_8032A9B4, lbl_8032A9B4, lbl_8032A9B4, M2C_FIELD(temp_r9_2, f32 (**)(void *), 0x23C)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x238)));
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    temp_f30 = M2C_FIELD(temp_r9_2, f32 (**)(void *), 0x23C)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x238));
    temp_r9_5 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    temp_f31_b = M2C_FIELD(temp_r9_5, f32 (**)(void *), 0x234)(arg0 + M2C_FIELD(temp_r9_5, s16 *, 0x230));
    ld_238 = M2C_FIELD(temp_r9_2, s16 *, 0x238);
    MainMenu__SetWidgetMotionEndpoints(arg0 + 0x500, lbl_8032A9B4, temp_f30, temp_f31_b, M2C_FIELD(temp_r9_2, f32 (**)(void *), 0x23C)(arg0 + ld_238));
    temp_r9_5 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    temp_f30 = M2C_FIELD(temp_r9_2, f32 (**)(void *), 0x234)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x230));
    temp_f31 = M2C_FIELD(temp_r9_5, f32 (**)(void *), 0x23C)(arg0 + M2C_FIELD(temp_r9_5, s16 *, 0x238));
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    MainMenu__SetWidgetMotionEndpoints(arg0 + 0x6C0, temp_f30, temp_f31, M2C_FIELD(temp_r9_2, f32 (**)(void *), 0x234)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x230)), lbl_8032A9B4);
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    MainMenu__SetWidgetMotionEndpoints(arg0 + 0x880, M2C_FIELD(temp_r9, f32 (**)(void *), 0x234)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x230)), lbl_8032A9B4, lbl_8032A9B4, lbl_8032A9B4);
}
