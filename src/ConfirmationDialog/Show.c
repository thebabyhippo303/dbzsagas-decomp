/* ConfirmationDialog__Show @ 0x80018538 (size: 0x468, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void ConfirmationDialog__RefreshChoiceLayout(void *);
f32 MainMenu__GetWidgetBoundsDiagonal(void *);
void fn_80260304(void *, float, float);
void fn_8026B0C8(void *, int);
void fn_8026B420(void *);
extern f32 lbl_8030DCC0 __attribute__((section(".data")));
extern f32 lbl_8030DCC4 __attribute__((section(".data")));
extern f32 lbl_8030DCC8 __attribute__((section(".data")));
extern f32 lbl_8030DCCC __attribute__((section(".data")));
extern f32 lbl_8030DCD0 __attribute__((section(".data")));
extern f32 lbl_8030DCD4 __attribute__((section(".data")));
extern f32 lbl_8030DCD8 __attribute__((section(".data")));
extern f32 lbl_8030DCDC __attribute__((section(".data")));
extern f32 lbl_8030DCE0 __attribute__((section(".data")));
extern f32 lbl_8030DCE4 __attribute__((section(".data")));
extern f32 lbl_8030DCE8 __attribute__((section(".data")));

void ConfirmationDialog__Show(void *arg0) {
    f32 temp_f12;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r9;
    void *temp_r9_2;

    ConfirmationDialog__RefreshChoiceLayout(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x11D0) == 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(arg0, s32 *, 0x11D0) = 1;
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1D4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x1D0));
        fn_8026B420(M2C_FIELD(arg0, void **, 0xC20));
        fn_80260304(M2C_FIELD(arg0, void **, 0xC20) + 0x94, lbl_8030DCC0, lbl_8030DCC0);
        temp_r30 = M2C_FIELD(arg0, void **, 0xC20) + 0x94;
        temp_f12 = MainMenu__GetWidgetBoundsDiagonal(arg0 + 0xABC);
        fn_80260304(temp_r30, lbl_8030DCC4, temp_f12);
        fn_80260304(M2C_FIELD(arg0, void **, 0xC20) + 0x244, lbl_8030DCC0, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0xC20) + 0x244, lbl_8030DCC8, M2C_FIELD(arg0, f32 *, 0x11E0));
        fn_8026B0C8(M2C_FIELD(arg0, void **, 0xC20), 0);
        fn_8026B420(M2C_FIELD(arg0, void **, 0xDE0));
        fn_80260304(M2C_FIELD(arg0, void **, 0xDE0) + 0x94, lbl_8030DCC0, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0xDE0) + 0x94, lbl_8030DCC4, lbl_8030DCC0);
        temp_r30_2 = M2C_FIELD(arg0, void **, 0xDE0) + 0x94;
        temp_f12 = MainMenu__GetWidgetBoundsDiagonal(arg0 + 0xC7C);
        fn_80260304(temp_r30_2, lbl_8030DCCC, temp_f12);
        fn_80260304(M2C_FIELD(arg0, void **, 0xDE0) + 0x244, lbl_8030DCC0, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0xDE0) + 0x244, lbl_8030DCC4, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0xDE0) + 0x244, lbl_8030DCD0, M2C_FIELD(arg0, f32 *, 0x11E0));
        fn_8026B0C8(M2C_FIELD(arg0, void **, 0xDE0), 0);
        fn_8026B420(M2C_FIELD(arg0, void **, 0xFA0));
        fn_80260304(M2C_FIELD(arg0, void **, 0xFA0) + 0x94, lbl_8030DCC0, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0xFA0) + 0x94, lbl_8030DCCC, lbl_8030DCC0);
        temp_r30_3 = M2C_FIELD(arg0, void **, 0xFA0) + 0x94;
        temp_f12 = MainMenu__GetWidgetBoundsDiagonal(arg0 + 0xE3C);
        fn_80260304(temp_r30_3, lbl_8030DCD4, temp_f12);
        fn_80260304(M2C_FIELD(arg0, void **, 0xFA0) + 0x244, lbl_8030DCC0, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0xFA0) + 0x244, lbl_8030DCCC, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0xFA0) + 0x244, lbl_8030DCD8, M2C_FIELD(arg0, f32 *, 0x11E0));
        fn_8026B0C8(M2C_FIELD(arg0, void **, 0xFA0), 0);
        fn_8026B420(M2C_FIELD(arg0, void **, 0x1160));
        fn_80260304(M2C_FIELD(arg0, void **, 0x1160) + 0x94, lbl_8030DCC0, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0x1160) + 0x94, lbl_8030DCD4, lbl_8030DCC0);
        temp_r30_4 = M2C_FIELD(arg0, void **, 0x1160) + 0x94;
        temp_f12 = MainMenu__GetWidgetBoundsDiagonal(arg0 + 0xFFC);
        fn_80260304(temp_r30_4, lbl_8030DCDC, temp_f12);
        fn_80260304(M2C_FIELD(arg0, void **, 0x1160) + 0x244, lbl_8030DCC0, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0x1160) + 0x244, lbl_8030DCD4, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0x1160) + 0x244, lbl_8030DCE0, M2C_FIELD(arg0, f32 *, 0x11E0));
        fn_8026B0C8(M2C_FIELD(arg0, void **, 0x1160), 0);
        fn_8026B420(M2C_FIELD(arg0, void **, 0xA80));
        fn_80260304(M2C_FIELD(arg0, void **, 0xA80) + 0x244, lbl_8030DCC0, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0xA80) + 0x244, lbl_8030DCD4, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0xA80) + 0x244, lbl_8030DCDC, M2C_FIELD(arg0, f32 *, 0x11F0));
        fn_8026B0C8(M2C_FIELD(arg0, void **, 0xA80), 0);
        fn_8026B420(M2C_FIELD(arg0, void **, 0x304));
        fn_80260304(M2C_FIELD(arg0, void **, 0x304) + 0x244, lbl_8030DCC0, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0x304) + 0x244, lbl_8030DCDC, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0x304) + 0x244, lbl_8030DCE4, lbl_8030DCE8);
        fn_8026B0C8(M2C_FIELD(arg0, void **, 0x304), 0);
        fn_8026B420(M2C_FIELD(arg0, void **, 0x4F8));
        fn_80260304(M2C_FIELD(arg0, void **, 0x4F8) + 0x244, lbl_8030DCC0, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0x4F8) + 0x244, lbl_8030DCDC, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0x4F8) + 0x244, lbl_8030DCE4, lbl_8030DCE8);
        fn_8026B0C8(M2C_FIELD(arg0, void **, 0x4F8), 0);
        fn_8026B420(M2C_FIELD(arg0, void **, 0x6EC));
        fn_80260304(M2C_FIELD(arg0, void **, 0x6EC) + 0x244, lbl_8030DCC0, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0x6EC) + 0x244, lbl_8030DCDC, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0x6EC) + 0x244, lbl_8030DCE4, lbl_8030DCE8);
        fn_8026B0C8(M2C_FIELD(arg0, void **, 0x6EC), 0);
        fn_8026B420(M2C_FIELD(arg0, void **, 0x8E0));
        fn_80260304(M2C_FIELD(arg0, void **, 0x8E0) + 0x244, lbl_8030DCC0, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0x8E0) + 0x244, lbl_8030DCDC, lbl_8030DCC0);
        fn_80260304(M2C_FIELD(arg0, void **, 0x8E0) + 0x244, lbl_8030DCE4, M2C_FIELD(arg0, f32 *, 0x1200));
        fn_8026B0C8(M2C_FIELD(arg0, void **, 0x8E0), 0);
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x1B0), 0x3E8);
    }
}
