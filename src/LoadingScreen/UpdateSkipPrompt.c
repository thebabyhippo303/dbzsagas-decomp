/* LoadingScreen__UpdateSkipPrompt @ 0x80129954 (size: 0x194, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void FmvBackground__SetSkipAllowed(void *, s32);
void LoadingScreen__FinalizeResourceRequests(void);
s32 Mem__New(s32);
void * UI__BuildButtonSymbolWidgets(void *, void *, s32);
M2C_UNK fn_8021BEBC(M2C_UNK);                       /* extern */
M2C_UNK fn_8022872C(M2C_UNK);                       /* extern */
M2C_UNK fn_80228B48(M2C_UNK);                       /* extern */
M2C_UNK fn_8022D150();                              /* extern */
M2C_UNK fn_8026B904();                              /* extern */
extern M2C_UNK lbl_803279E4 __attribute__((section(".data")));
extern f32 lbl_803279EC __attribute__((section(".data")));
extern f32 lbl_803279F0 __attribute__((section(".data")));
extern s32 lbl_803DC6D8;
extern s32 lbl_803DC6DC;
extern s32 lbl_803DC6E0;
extern void *lbl_803DD934;
extern void *lbl_803DD944;

void LoadingScreen__UpdateSkipPrompt(void) {
    void *temp_r29;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;

    if ((void *) lbl_803DD944 != NULL) {
        FmvBackground__SetSkipAllowed(lbl_803DD944, 1);
        if (((s32) lbl_803DC6D8 != 0) && ((s32) lbl_803DC6DC == 0)) {
            temp_r9 = M2C_FIELD(lbl_803DD934, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK *), 0x36C)(lbl_803DD934 + M2C_FIELD(temp_r9, s16 *, 0x368), &lbl_803279E4);
            temp_r9_2 = M2C_FIELD(lbl_803DD934, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0xAC)(lbl_803DD934 + M2C_FIELD(temp_r9_2, s16 *, 0xA8), lbl_803279EC, lbl_803279F0);
            temp_r30 = M2C_FIELD(lbl_803DD934, void **, 0x19C);
            temp_r30_2 = temp_r30 + 0x380;
            temp_r29 = lbl_803DD934 + M2C_FIELD(temp_r30, s16 *, 0x380);
            M2C_FIELD(temp_r30_2, M2C_UNK (**)(void *, void *), 4)(temp_r29, UI__BuildButtonSymbolWidgets(Mem__New(0xD4), lbl_803DD934, 1));
            temp_r9_3 = M2C_FIELD(lbl_803DD934, void **, 0x19C);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x3C)(lbl_803DD934 + M2C_FIELD(temp_r9_3, s16 *, 0x38));
            fn_8026B904();
        }
        LoadingScreen__FinalizeResourceRequests();
    }
    temp_r9_4 = M2C_FIELD(lbl_803DD934, void **, 0x19C);
    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x374)(lbl_803DD934 + M2C_FIELD(temp_r9_4, s16 *, 0x370));
    temp_r9_5 = M2C_FIELD(lbl_803DD934, void **, 0x19C);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x1E4)(lbl_803DD934 + M2C_FIELD(temp_r9_5, s16 *, 0x1E0));
    temp_r9_6 = M2C_FIELD(lbl_803DD934, void **, 0x19C);
    M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *), 0x2C)(lbl_803DD934 + M2C_FIELD(temp_r9_6, s16 *, 0x28));
    temp_r9_7 = M2C_FIELD(lbl_803DD934, void **, 0x19C);
    M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *), 0x3C)(lbl_803DD934 + M2C_FIELD(temp_r9_7, s16 *, 0x38));
    fn_8022872C(0);
    fn_80228B48(0);
    fn_8022D150();
    fn_8021BEBC(0);
    lbl_803DC6E0 = 0;
}
