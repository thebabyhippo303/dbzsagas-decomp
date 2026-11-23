/* MainMenu__InitializeSaveConfirmationWidgets @ 0x8014B7FC (size: 0x37C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; }))

void UI__SetColorRGBA(void *, f32, f32, f32, f32);
void ConfirmationDialog__BuildWidgets(void *);
void ConfirmationDialog__SetChoiceLayoutPosition(void *, f32, f32);
void Sphere__AddChild(void *, void *);
void UIList__SetSelectedEntryTransform(void *, f32, f32, f32, f32);
void UIList__SetDefaultEntryTransform(void *, f32, f32, f32, f32);
void UIList__AddEntry(void *, void *, s32, s32);
f32 fn_8026B86C(void);
f32 fn_8026B8B8(void);
void fn_8026C2E4(void *, s32, s32, s32, s32, s32);
void fn_8026C508(void *, float, float);
void fn_8026C5A0(void *, float, float);
void fn_8026C634(void *, float, float);
void fn_8026C6F8(void *, int);
void fn_8026C7F8(void *, f32, f32, f32, f32);
M2C_UNK fn_8026D5D0(s32, s32);
M2C_UNK UIList__CreateSelectionHighlight(s32);
M2C_UNK UIList__ClearEntries(s32);
M2C_UNK UIList__UpdateVisibility(s32);
extern f32 lbl_8032BE40 __attribute__((section(".data")));
extern f32 lbl_8032BE44 __attribute__((section(".data")));
extern f32 lbl_8032BE48 __attribute__((section(".data")));
extern f32 lbl_8032BE4C __attribute__((section(".data")));
extern f32 lbl_8032BE50 __attribute__((section(".data")));
extern f32 lbl_8032BE54 __attribute__((section(".data")));
extern f32 lbl_8032BE58 __attribute__((section(".data")));
extern f32 lbl_8032BE5C __attribute__((section(".data")));
extern f32 lbl_8032BE60 __attribute__((section(".data")));
extern void *lbl_803DC3B4;
extern void *lbl_803DC3C0;

void MainMenu__InitializeSaveConfirmationWidgets(void *arg0) {
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f31_3;
    void *temp_r11;
    void *temp_r24;
    void *temp_r25;
    void *temp_r28;
    void *temp_r29;
    void *temp_r30;
    void *temp_r29_3;
    void *temp_r29_2;
    void *temp_r30_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    temp_r11 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r25 = arg0 + 0x1A4;
    temp_r24 = arg0 + 0x344;
    temp_r28 = arg0 + 0xAE94;
    M2C_FIELD(temp_r11, void (**)(void *, s32, s32, s32, s32, s32), 0x14)(arg0 + M2C_FIELD(temp_r11, s16 *, 0x10), M2C_FIELD(lbl_803DC3B4, s32 *, 0), 0, 0, 1, 1);
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x108), lbl_8032BE40, lbl_8032BE40, lbl_8032BE40, lbl_8032BE40);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0xEC)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0xE8), lbl_8032BE40, lbl_8032BE40);
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32, f32), 0xAC)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0xA8), lbl_8032BE40, lbl_8032BE40);
    temp_r29 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r30 = arg0 + M2C_FIELD(temp_r29, s16 *, 0x88);
    temp_r29_2 = temp_r29 + 0x88;
    temp_f31 = fn_8026B86C();
    M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30, temp_f31, fn_8026B8B8());
    temp_r9_4 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(arg0 + M2C_FIELD(temp_r9_4, s16 *, 0x1B0), 0);
    UI__SetColorRGBA(temp_r25, lbl_8032BE44, lbl_8032BE44, lbl_8032BE44, lbl_8032BE40);
    fn_8026C6F8(temp_r25, 0xA);
    {
        f32 t1 = lbl_8032BE44;
        f32 t2 = t1;
        f32 t3 = t2;
        f32 t4 = t3;
        UI__SetColorRGBA(temp_r24, t1, t2, t3, t4);
    }
    fn_8026C6F8(temp_r24, 0x14);
    ConfirmationDialog__BuildWidgets(temp_r28);
    fn_8026C5A0(temp_r28, lbl_8032BE48, lbl_8032BE48);
    ConfirmationDialog__SetChoiceLayoutPosition(temp_r28, lbl_8032BE4C, lbl_8032BE50);
    {
        f32 a = fn_8026B86C();
        temp_f31_2 = lbl_8032BE48;
        temp_f30 = a * temp_f31_2;
        fn_8026C508(temp_r28, temp_f30, fn_8026B8B8() * temp_f31_2);
    }
    UI__SetColorRGBA(temp_r28, lbl_8032BE44, lbl_8032BE44, lbl_8032BE44, lbl_8032BE40);
    if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x1C) == 5) {
        fn_8026C2E4(arg0 + 0xC674, M2C_FIELD(lbl_803DC3B4, s32 *, 0x28), 0xB, 0, 1, 1);
    } else {
        fn_8026C2E4(arg0 + 0xC674, M2C_FIELD(lbl_803DC3B4, s32 *, 0x24), 0xD, 0, 1, 1);
    }
    temp_r30_2 = arg0 + 0xC674;
    temp_r29_3 = arg0 + 0xC814;
    fn_8026C5A0(temp_r30_2, lbl_8032BE48, lbl_8032BE48);
    {
        f32 b = fn_8026B86C();
        temp_f31_3 = lbl_8032BE48;
        temp_f30_2 = b * temp_f31_3;
        fn_8026C508(temp_r30_2, temp_f30_2, fn_8026B8B8() * temp_f31_3);
    }
    fn_8026C7F8(temp_r30_2, lbl_8032BE44, lbl_8032BE44, lbl_8032BE44, lbl_8032BE54);
    fn_8026C634(temp_r30_2, lbl_8032BE58, lbl_8032BE58);
    UI__SetColorRGBA(temp_r30_2, lbl_8032BE44, lbl_8032BE44, lbl_8032BE44, lbl_8032BE40);
    fn_8026D5D0((s32) temp_r30_2, 0);
    Sphere__AddChild(arg0 + 0xAE94, temp_r30_2);
    fn_8026C6F8(temp_r30_2, 0x352);
    UIList__CreateSelectionHighlight((s32) temp_r29_3);
    UIList__SetSelectedEntryTransform(temp_r29_3, lbl_8032BE44, lbl_8032BE44, lbl_8032BE44, lbl_8032BE44);
    UIList__SetDefaultEntryTransform(temp_r29_3, lbl_8032BE5C, lbl_8032BE60, lbl_8032BE5C, lbl_8032BE44);
    Sphere__AddChild(arg0, temp_r29_3);
    UIList__ClearEntries((s32) temp_r29_3);
    UIList__AddEntry(temp_r29_3, arg0 + 0xC28C, 0, 0);
    UIList__AddEntry(temp_r29_3, arg0 + 0xC480, 1, 0);
    UIList__UpdateVisibility((s32) temp_r29_3);
}
