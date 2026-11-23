/* ConfirmationDialog__Hide @ 0x800189A0 (size: 0x46C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 MainMenu__GetWidgetBoundsDiagonal(void *);
void fn_80260304(void *, float, float);
void fn_8026B0C8(void *, int);
void fn_8026B420(void *);
extern f32 lbl_8030DCEC __attribute__((section(".data")));
extern f32 lbl_8030DCF0 __attribute__((section(".data")));
extern f32 lbl_8030DCF4 __attribute__((section(".data")));
extern f32 lbl_8030DCF8 __attribute__((section(".data")));
extern f32 lbl_8030DCFC __attribute__((section(".data")));
extern f32 lbl_8030DD00 __attribute__((section(".data")));
extern f32 lbl_8030DD04 __attribute__((section(".data")));
extern f32 lbl_8030DD08 __attribute__((section(".data")));
extern f32 lbl_8030DD0C __attribute__((section(".data")));
extern f32 lbl_8030DD10 __attribute__((section(".data")));
extern f32 lbl_8030DD14 __attribute__((section(".data")));
extern f32 lbl_8030DD18 __attribute__((section(".data")));

void ConfirmationDialog__Hide(void *arg0) {
    void *temp_r24;
    void *temp_r22;
    void *temp_r21;
    void *temp_r20;
    void *temp_r9;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r30_5;
    void *temp_r30_6;
    void *temp_r30_7;
    void *temp_r30_8;
    f32 temp_f12;

    M2C_FIELD(arg0, s32 *, 0x11CC) = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0x11D0))) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x11D0) = 0;
    fn_8026B420(M2C_FIELD(arg0, void **, 0x304));
    temp_r24 = arg0 + 0xFFC;
    temp_r22 = arg0 + 0xE3C;
    fn_80260304(M2C_FIELD(arg0, void **, 0x304) + 0x244, lbl_8030DCEC, lbl_8030DCF0);
    temp_r21 = arg0 + 0xC7C;
    temp_r20 = arg0 + 0xABC;
    fn_80260304(M2C_FIELD(arg0, void **, 0x304) + 0x244, lbl_8030DCF4, lbl_8030DCEC);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x304), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x4F8));
    fn_80260304(M2C_FIELD(arg0, void **, 0x4F8) + 0x244, lbl_8030DCEC, lbl_8030DCF0);
    fn_80260304(M2C_FIELD(arg0, void **, 0x4F8) + 0x244, lbl_8030DCF4, lbl_8030DCEC);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x4F8), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x6EC));
    fn_80260304(M2C_FIELD(arg0, void **, 0x6EC) + 0x244, lbl_8030DCEC, lbl_8030DCF0);
    fn_80260304(M2C_FIELD(arg0, void **, 0x6EC) + 0x244, lbl_8030DCF4, lbl_8030DCEC);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x6EC), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x8E0));
    fn_80260304(M2C_FIELD(arg0, void **, 0x8E0) + 0x244, lbl_8030DCEC, M2C_FIELD(arg0, f32 *, 0x1200));
    fn_80260304(M2C_FIELD(arg0, void **, 0x8E0) + 0x244, lbl_8030DCF4, lbl_8030DCEC);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x8E0), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0xA80));
    fn_80260304(M2C_FIELD(arg0, void **, 0xA80) + 0x244, lbl_8030DCEC, M2C_FIELD(arg0, f32 *, 0x11F0));
    fn_80260304(M2C_FIELD(arg0, void **, 0xA80) + 0x244, lbl_8030DCF4, M2C_FIELD(arg0, f32 *, 0x11F0));
    fn_80260304(M2C_FIELD(arg0, void **, 0xA80) + 0x244, lbl_8030DCF8, lbl_8030DCEC);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0xA80), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0x1160));
    temp_r30 = M2C_FIELD(arg0, void **, 0x1160) + 0x94;
    temp_f12 = MainMenu__GetWidgetBoundsDiagonal(temp_r24);
    fn_80260304(temp_r30, lbl_8030DCEC, temp_f12);
    temp_r30_2 = M2C_FIELD(arg0, void **, 0x1160) + 0x94;
    temp_f12 = MainMenu__GetWidgetBoundsDiagonal(temp_r24);
    fn_80260304(temp_r30_2, lbl_8030DCF8, temp_f12);
    fn_80260304(M2C_FIELD(arg0, void **, 0x1160) + 0x94, lbl_8030DCFC, lbl_8030DCEC);
    fn_80260304(M2C_FIELD(arg0, void **, 0x1160) + 0x244, lbl_8030DCEC, M2C_FIELD(arg0, f32 *, 0x11E0));
    fn_80260304(M2C_FIELD(arg0, void **, 0x1160) + 0x244, lbl_8030DCFC, M2C_FIELD(arg0, f32 *, 0x11E0));
    fn_80260304(M2C_FIELD(arg0, void **, 0x1160) + 0x244, lbl_8030DD00, lbl_8030DCEC);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x1160), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0xFA0));
    temp_r30_3 = M2C_FIELD(arg0, void **, 0xFA0) + 0x94;
    temp_f12 = MainMenu__GetWidgetBoundsDiagonal(temp_r22);
    fn_80260304(temp_r30_3, lbl_8030DCEC, temp_f12);
    temp_r30_4 = M2C_FIELD(arg0, void **, 0xFA0) + 0x94;
    temp_f12 = MainMenu__GetWidgetBoundsDiagonal(temp_r22);
    fn_80260304(temp_r30_4, lbl_8030DCFC, temp_f12);
    fn_80260304(M2C_FIELD(arg0, void **, 0xFA0) + 0x94, lbl_8030DD04, lbl_8030DCEC);
    fn_80260304(M2C_FIELD(arg0, void **, 0xFA0) + 0x244, lbl_8030DCEC, M2C_FIELD(arg0, f32 *, 0x11E0));
    fn_80260304(M2C_FIELD(arg0, void **, 0xFA0) + 0x244, lbl_8030DD04, M2C_FIELD(arg0, f32 *, 0x11E0));
    fn_80260304(M2C_FIELD(arg0, void **, 0xFA0) + 0x244, lbl_8030DD08, lbl_8030DCEC);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0xFA0), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0xDE0));
    temp_r30_5 = M2C_FIELD(arg0, void **, 0xDE0) + 0x94;
    temp_f12 = MainMenu__GetWidgetBoundsDiagonal(temp_r21);
    fn_80260304(temp_r30_5, lbl_8030DCEC, temp_f12);
    temp_r30_6 = M2C_FIELD(arg0, void **, 0xDE0) + 0x94;
    temp_f12 = MainMenu__GetWidgetBoundsDiagonal(temp_r21);
    fn_80260304(temp_r30_6, lbl_8030DD04, temp_f12);
    fn_80260304(M2C_FIELD(arg0, void **, 0xDE0) + 0x94, lbl_8030DD0C, lbl_8030DCEC);
    fn_80260304(M2C_FIELD(arg0, void **, 0xDE0) + 0x244, lbl_8030DCEC, M2C_FIELD(arg0, f32 *, 0x11E0));
    fn_80260304(M2C_FIELD(arg0, void **, 0xDE0) + 0x244, lbl_8030DD0C, M2C_FIELD(arg0, f32 *, 0x11E0));
    fn_80260304(M2C_FIELD(arg0, void **, 0xDE0) + 0x244, lbl_8030DD10, lbl_8030DCEC);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0xDE0), 0);
    fn_8026B420(M2C_FIELD(arg0, void **, 0xC20));
    temp_r30_7 = M2C_FIELD(arg0, void **, 0xC20) + 0x94;
    temp_f12 = MainMenu__GetWidgetBoundsDiagonal(temp_r20);
    fn_80260304(temp_r30_7, lbl_8030DCEC, temp_f12);
    temp_r30_8 = M2C_FIELD(arg0, void **, 0xC20) + 0x94;
    temp_f12 = MainMenu__GetWidgetBoundsDiagonal(temp_r20);
    fn_80260304(temp_r30_8, lbl_8030DD0C, temp_f12);
    fn_80260304(M2C_FIELD(arg0, void **, 0xC20) + 0x94, lbl_8030DD14, lbl_8030DCEC);
    fn_80260304(M2C_FIELD(arg0, void **, 0xC20) + 0x244, lbl_8030DCEC, M2C_FIELD(arg0, f32 *, 0x11E0));
    fn_80260304(M2C_FIELD(arg0, void **, 0xC20) + 0x244, lbl_8030DD14, M2C_FIELD(arg0, f32 *, 0x11E0));
    fn_80260304(M2C_FIELD(arg0, void **, 0xC20) + 0x244, lbl_8030DD18, lbl_8030DCEC);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0xC20), 0);
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x1B0), 0x3E8);
}
