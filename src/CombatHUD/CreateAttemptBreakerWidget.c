/* CombatHUD__CreateAttemptBreakerWidget @ 0x80111D64 (size: 0x61C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Mem__New(u32);
void UiAnimator__SetKey(void *, f32, f32);
M2C_UNK Sphere__Construct(s32);
M2C_UNK UiAnimator__SetSmoothStep(s32, s32);
M2C_UNK UiAnimator__Restart(s32, s32);
M2C_UNK UiAnimator__SetInterpolate(s32, s32);
extern f32 lbl_803265E0 __attribute__((section(".data")));
extern f32 lbl_803265E4 __attribute__((section(".data")));
extern f32 lbl_803265E8 __attribute__((section(".data")));
extern f32 lbl_803265EC __attribute__((section(".data")));
extern f32 lbl_803265F0 __attribute__((section(".data")));
extern f32 lbl_803265F4 __attribute__((section(".data")));
extern f64 lbl_803265F8 __attribute__((section(".data")));
extern f32 lbl_80326600 __attribute__((section(".data")));
extern f32 lbl_80326604 __attribute__((section(".data")));
extern f32 lbl_80326608 __attribute__((section(".data")));
extern f32 lbl_8032660C __attribute__((section(".data")));
extern f32 lbl_80326610 __attribute__((section(".data")));
extern f32 lbl_80326614 __attribute__((section(".data")));
extern f32 lbl_80326618 __attribute__((section(".data")));
extern f32 lbl_8032661C __attribute__((section(".data")));
extern f32 lbl_80326620 __attribute__((section(".data")));
extern void *lbl_803DC3B4;

typedef union { f64 d; struct { u32 hi; u32 lo; } w; } DW;

void CombatHUD__CreateAttemptBreakerWidget(void *arg0) {
    f32 temp_f1;
    DW conv;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f30_3;
    f32 temp_f30_4;
    f32 temp_f30_5;
    f32 temp_f31;
    f32 temp_f31_2;
    s32 temp_r10;
    s32 temp_r10_2;
    s32 temp_r10_3;
    s32 temp_r10_4;
    s32 temp_r11_11;
    s32 temp_r11_12;
    s32 temp_r11_3;
    s32 temp_r11_5;
    s32 temp_r11_6;
    s32 temp_r11_9;
    s32 temp_r28;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r28;
    void *temp_r11;
    void *temp_r11_10;
    void *temp_r11_2;
    void *temp_r11_4;
    void *temp_r11_7;
    void *temp_r11_8;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;

    temp_f30 = lbl_803265E0;
    temp_r3 = Sphere__Construct(Mem__New(0x1A0U));
    M2C_FIELD(arg0, s32 *, 0x2F08) = temp_r3;
    if (temp_r3 != 0) {
        temp_r11 = M2C_FIELD(temp_r3, void **, 0x19C);
        var_r28 = 0;
        M2C_FIELD(temp_r11, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x14)(temp_r3 + M2C_FIELD(temp_r11, s16 *, 0x10), M2C_FIELD(lbl_803DC3B4, s32 *, 0x28), 3, 0, 1, 1, lbl_803DC3B4);
        temp_r10 = M2C_FIELD(arg0, s32 *, 0x2F08);
        temp_r11_2 = M2C_FIELD(temp_r10, void **, 0x19C);
        M2C_FIELD(temp_r11_2, M2C_UNK (**)(s32, f32, f32), 0xEC)(temp_r10 + M2C_FIELD(temp_r11_2, s16 *, 0xE8), lbl_803265E4, lbl_803265E4);
        temp_r11_3 = M2C_FIELD(arg0, s32 *, 0x2F08);
        temp_r9 = M2C_FIELD(temp_r11_3, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(s32, M2C_UNK), 0x1B4)(temp_r11_3 + M2C_FIELD(temp_r9, s16 *, 0x1B0), 0);
        temp_r10_2 = M2C_FIELD(arg0, s32 *, 0x2F08);
        temp_r11_4 = M2C_FIELD(temp_r10_2, void **, 0x19C);
        M2C_FIELD(temp_r11_4, M2C_UNK (**)(s32, f32, f32), 0xAC)(temp_r10_2 + M2C_FIELD(temp_r11_4, s16 *, 0xA8), lbl_803265E8, lbl_803265EC);
        temp_r11_5 = M2C_FIELD(arg0, s32 *, 0x2F08);
        temp_r9_2 = M2C_FIELD(temp_r11_5, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(s32, M2C_UNK), 0x1EC)(temp_r11_5 + M2C_FIELD(temp_r9_2, s16 *, 0x1E8), 0xFFFF);
        temp_r11_6 = M2C_FIELD(arg0, s32 *, 0x2F08);
        temp_r9_3 = M2C_FIELD(temp_r11_6, void **, 0x19C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(s32), 0x3C)(temp_r11_6 + M2C_FIELD(temp_r9_3, s16 *, 0x38));
        UiAnimator__SetSmoothStep(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x64, 0);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x64, temp_f30, lbl_803265EC);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x64, lbl_803265F0, lbl_803265F4);
        UiAnimator__Restart(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x64, 0);
        temp_f30_2 = lbl_803265F0;
        UiAnimator__SetSmoothStep(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x214, 0);
        temp_f28 = lbl_80326600;
        temp_f29 = lbl_80326604;
        do {
            temp_r28 = var_r28;
            conv.w.lo = (u32) (temp_r28 ^ 0x80000000);
            var_r28 += 1;
            conv.w.hi = 0x43300000;
            temp_f1 = (f32) (conv.d - lbl_803265F8);
            UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x214, (temp_f1 * temp_f28) + temp_f30_2, temp_f1 * temp_f29);
        } while (var_r28 <= 0xF);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x214, lbl_803265F4, lbl_80326608);
        UiAnimator__Restart(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x214, 1);
        temp_f31 = lbl_803265F0;
        temp_f30_3 = temp_f30_2 + temp_f31;
        UiAnimator__SetSmoothStep(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x244, 0);
        UiAnimator__SetInterpolate(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x244, 0);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x244, lbl_803265E0, lbl_8032660C);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x244, temp_f30_3, lbl_803265E0);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x244, temp_f30_3 + lbl_80326610, lbl_8032660C);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x244, temp_f30_3 + lbl_80326614, lbl_803265E0);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x244, temp_f30_3 + lbl_80326618, lbl_8032660C);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x244, temp_f30_3 + lbl_8032661C, lbl_803265E0);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x244, temp_f30_3 + temp_f31, lbl_8032660C);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x244, lbl_803265F4, lbl_8032660C);
        UiAnimator__Restart(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x244, 0);
    }
    temp_f30_4 = lbl_803265E0;
    temp_r3_2 = Sphere__Construct(Mem__New(0x1A0U));
    M2C_FIELD(arg0, s32 *, 0x2F04) = temp_r3_2;
    if (temp_r3_2 != 0) {
        temp_r11_7 = M2C_FIELD(temp_r3_2, void **, 0x19C);
        M2C_FIELD(temp_r11_7, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x14)(temp_r3_2 + M2C_FIELD(temp_r11_7, s16 *, 0x10), M2C_FIELD(lbl_803DC3B4, s32 *, 0x28), 2, 0, 1, 1, lbl_803DC3B4);
        temp_r10_3 = M2C_FIELD(arg0, s32 *, 0x2F04);
        temp_r11_8 = M2C_FIELD(temp_r10_3, void **, 0x19C);
        M2C_FIELD(temp_r11_8, M2C_UNK (**)(s32, f32, f32), 0xEC)(temp_r10_3 + M2C_FIELD(temp_r11_8, s16 *, 0xE8), lbl_803265E4, lbl_803265E4);
        temp_r11_9 = M2C_FIELD(arg0, s32 *, 0x2F04);
        temp_r9_4 = M2C_FIELD(temp_r11_9, void **, 0x19C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(s32, M2C_UNK), 0x1B4)(temp_r11_9 + M2C_FIELD(temp_r9_4, s16 *, 0x1B0), 0);
        temp_r10_4 = M2C_FIELD(arg0, s32 *, 0x2F04);
        temp_r11_10 = M2C_FIELD(temp_r10_4, void **, 0x19C);
        M2C_FIELD(temp_r11_10, M2C_UNK (**)(s32, f32, f32), 0xAC)(temp_r10_4 + M2C_FIELD(temp_r11_10, s16 *, 0xA8), lbl_803265E8, lbl_803265EC);
        temp_r11_11 = M2C_FIELD(arg0, s32 *, 0x2F04);
        temp_r9_5 = M2C_FIELD(temp_r11_11, void **, 0x19C);
        M2C_FIELD(temp_r9_5, M2C_UNK (**)(s32, M2C_UNK), 0x1EC)(temp_r11_11 + M2C_FIELD(temp_r9_5, s16 *, 0x1E8), 0xFFFF);
        temp_r11_12 = M2C_FIELD(arg0, s32 *, 0x2F04);
        temp_r9_6 = M2C_FIELD(temp_r11_12, void **, 0x19C);
        M2C_FIELD(temp_r9_6, M2C_UNK (**)(s32), 0x3C)(temp_r11_12 + M2C_FIELD(temp_r9_6, s16 *, 0x38));
        UiAnimator__SetSmoothStep(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x64, 0);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x64, temp_f30_4, lbl_803265EC);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x64, lbl_803265F0, lbl_803265F4);
        UiAnimator__Restart(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x64, 0);
        temp_f30_5 = lbl_80326620;
        UiAnimator__SetSmoothStep(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x244, 0);
        UiAnimator__SetInterpolate(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x244, 0);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x244, lbl_803265E0, lbl_8032660C);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F08), s32 *, 0x164) + 0x244, temp_f30_5, lbl_803265E0);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x244, temp_f30_5 + lbl_80326610, lbl_8032660C);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x244, temp_f30_5 + lbl_80326614, lbl_803265E0);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x244, temp_f30_5 + lbl_80326618, lbl_803265E0);
        temp_f31_2 = temp_f30_5 + lbl_8032661C;
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x244, temp_f31_2, lbl_803265E0);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x244, temp_f30_5 + lbl_803265F0, temp_f31_2);
        UiAnimator__SetKey(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x244, lbl_803265F4, temp_f31_2);
        UiAnimator__Restart(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x2F04), s32 *, 0x164) + 0x244, 0);
    }
}
