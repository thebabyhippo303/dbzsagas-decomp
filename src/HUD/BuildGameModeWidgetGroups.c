/* HUD__BuildGameModeWidgetGroups @ 0x8010C744 (size: 0x4F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void HUD__BuildStarBeepWidgetGroup(void *, s32, s32, f32, f32);
void HUD__ResetWidgetGroups(void *, void *);
M2C_UNK HUD__BuildMeterWidgetGroup(s32, s32, s32, s32, f32, f32);
M2C_UNK HUD__BuildPlayerHealthMeterSegments(s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32);
M2C_UNK HUD__BuildTrackedPlayerWidgets(s32, s32);
M2C_UNK HUD__BuildPlayerEnergyMeterSegments(s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32);
M2C_UNK HUD__BuildQuickRecoveryWidgetSet(s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32);
M2C_UNK HUD__CreateSpecialMoveLabelWidget(s32, s32, f32, f32);
extern f32 lbl_8032626C __attribute__((section(".data")));
extern f32 lbl_80326270 __attribute__((section(".data")));
extern f32 lbl_80326274 __attribute__((section(".data")));
extern f32 lbl_80326278 __attribute__((section(".data")));
extern f32 lbl_8032627C __attribute__((section(".data")));
extern f32 lbl_80326280;
extern f32 lbl_80326284 __attribute__((section(".data")));
extern f32 lbl_80326288 __attribute__((section(".data")));
extern f32 lbl_8032628C __attribute__((section(".data")));
extern f32 lbl_80326290 __attribute__((section(".data")));
extern f32 lbl_80326294 __attribute__((section(".data")));
extern f32 lbl_80326298 __attribute__((section(".data")));
extern f32 lbl_8032629C __attribute__((section(".data")));
extern f32 lbl_803262A0 __attribute__((section(".data")));
extern f32 lbl_803262A4 __attribute__((section(".data")));
extern f32 lbl_803262A8 __attribute__((section(".data")));
extern f32 lbl_803262AC __attribute__((section(".data")));
extern f32 lbl_803262B0 __attribute__((section(".data")));
extern f32 lbl_803262B4 __attribute__((section(".data")));
extern f32 lbl_803262B8 __attribute__((section(".data")));
extern f32 lbl_803262BC __attribute__((section(".data")));
extern f32 lbl_803262C0 __attribute__((section(".data")));
extern f32 lbl_803262C4 __attribute__((section(".data")));
extern f32 lbl_803262C8 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void HUD__BuildGameModeWidgetGroups(void *arg0, void *arg1) {
    f32 ld_2180;
    f32 temp_f27;
    register f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f31_2;
    f32 var_f28;
    f32 var_f30;
    f32 var_f31;
    s32 temp_r0;
    s32 temp_r11_4;
    s32 temp_r27;
    s32 temp_r9_3;
    s32 var_r29;
    s32 var_r30;
    s32 var_r9;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r10_3;
    void *temp_r11;
    void *temp_r11_2;
    register void *temp_r11_3;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r11_7;
    void *temp_r11_8;
    void *temp_r28;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;

    temp_r28 = arg0 + 0x1C80;
    var_f28 = lbl_8032626C;
    temp_f30 = lbl_80326270;
    HUD__ResetWidgetGroups(arg0, temp_r28);
    M2C_FIELD(arg0, void **, 0x1C80) = arg1;
    temp_r0 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
    if ((temp_r0 == 0x11) || (temp_r0 == 0x13)) {
        M2C_FIELD(arg0, f32 *, 0x2178) = (f32) lbl_80326274;
        M2C_FIELD(arg0, f32 *, 0x2174) = (f32) lbl_80326274;
        var_f30 = lbl_80326284;
        var_f28 = lbl_80326280 + lbl_8032628C;
        M2C_FIELD(arg0, f32 *, 0x216C) = lbl_80326280;
        M2C_FIELD(arg0, f32 *, 0x2170) = var_f30;
        M2C_FIELD(arg0, f32 *, 0x2180) = (f32) lbl_80326288;
        M2C_FIELD(arg0, f32 *, 0x217C) = (f32) ((M2C_FIELD(arg1, f32 *, 0x2A0) * lbl_80326278) + lbl_8032627C);
        HUD__BuildMeterWidgetGroup((s32) arg0, (s32) arg1, (s32) temp_r28, 1, var_f28, var_f30);
        temp_r4 = M2C_FIELD(arg0, void **, 0x1C80);
        temp_f31 = var_f28 - lbl_80326290;
        HUD__BuildPlayerHealthMeterSegments((s32) arg0, (s32) temp_r4, (s32) (arg0 + 0x1C84), 0x20FF20, 0xFF2020, 0, temp_f31, var_f30 + lbl_80326294, M2C_FIELD(arg0, f32 *, 0x2174), lbl_80326298, lbl_8032629C, M2C_FIELD(temp_r4, f32 *, 0x288) / M2C_FIELD(temp_r4, f32 *, 0x28C), M2C_FIELD(arg0, f32 *, 0x2180));
        HUD__BuildTrackedPlayerWidgets((s32) arg0, (s32) temp_r28);
        temp_r4_2 = M2C_FIELD(arg0, void **, 0x1C80);
        HUD__BuildPlayerEnergyMeterSegments((s32) arg0, (s32) temp_r4_2, (s32) (arg0 + 0x1D68), 0x2020FF, 0x2020FF, 0, temp_f31, var_f30 + lbl_803262A0, M2C_FIELD(arg0, f32 *, 0x2178), lbl_80326298, lbl_8032629C, M2C_FIELD(temp_r4_2, f32 *, 0x294) / M2C_FIELD(temp_r4_2, f32 *, 0x298), M2C_FIELD(arg0, f32 *, 0x2180));
        temp_r4_3 = M2C_FIELD(arg0, void **, 0x1C80);
        ld_2180 = M2C_FIELD(arg0, f32 *, 0x2180);
        HUD__BuildQuickRecoveryWidgetSet((s32) arg0, (s32) temp_r4_3, (s32) (arg0 + 0x1E4C), 0x20FF20, 0xFF2020, 0, var_f28 - lbl_803262A4, var_f30 + lbl_803262A8, M2C_FIELD(arg0, f32 *, 0x217C), lbl_80326298, lbl_8032629C, M2C_FIELD(temp_r4_3, f32 *, 0x29C) / M2C_FIELD(temp_r4_3, f32 *, 0x2A0), ld_2180);
        HUD__CreateSpecialMoveLabelWidget((s32) arg0, (s32) temp_r28, var_f28 - lbl_803262AC, var_f30 + lbl_803262B0);
        HUD__BuildStarBeepWidgetGroup(arg0, (s32) temp_r28, 0, lbl_803262B4, lbl_803262B8);
    } else {
        M2C_FIELD(arg0, f32 *, 0x2170) = temp_f30;
        var_f30 = temp_f30 - lbl_8032628C;
        M2C_FIELD(arg0, f32 *, 0x216C) = var_f28;
        M2C_FIELD(arg0, f32 *, 0x2178) = (f32) lbl_803262BC;
        M2C_FIELD(arg0, f32 *, 0x2174) = (f32) lbl_803262BC;
        temp_r30 = arg0 + 0x1C84;
        HUD__BuildMeterWidgetGroup((s32) arg0, 0, (s32) temp_r28, 1, var_f28, var_f30);
        temp_r11 = M2C_FIELD(arg0, void **, 0x1C80);
        temp_f29 = var_f28 + lbl_80326290;
        HUD__BuildPlayerHealthMeterSegments((s32) arg0, 0, (s32) temp_r30, 0x20FF20, 0xFF2020, 0, temp_f29, var_f30 + lbl_80326294, M2C_FIELD(arg0, f32 *, 0x2174), lbl_80326298, lbl_8032629C, M2C_FIELD(temp_r11, f32 *, 0x288) / M2C_FIELD(temp_r11, f32 *, 0x28C), lbl_803262C0);
        temp_r11_2 = M2C_FIELD(arg0, void **, 0x1D44);
        temp_f27 = lbl_803262C4;
        temp_r9 = M2C_FIELD(temp_r11_2, void **, 0x19C);
        temp_f31_2 = var_f30 - temp_f27;
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11_2 + M2C_FIELD(temp_r9, s16 *, 0xA8), temp_f29, temp_f31_2);
        temp_r11_3 = M2C_FIELD(arg0, void **, 0x1D48);
        temp_r9_2 = M2C_FIELD(temp_r11_3, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11_3 + M2C_FIELD(temp_r9_2, s16 *, 0xA8), temp_f29, temp_f31_2);
        temp_r11_4 = (s32) (M2C_FIELD(arg0, f32 *, 0x2174) - lbl_803262C8);
        var_r9 = temp_r11_4 - 1;
        if (var_r9 < 0) {
            var_r9 = temp_r11_4 + 6;
        }
        temp_r9_3 = var_r9 >> 3;
        var_f31 = temp_f29;
        temp_r27 = temp_r9_3 + 1;
        if ((s32) (temp_r9_3 + 4) > 3) {
            var_r29 = 0xC;
            var_r30 = temp_r27;
            do {
                temp_r11_5 = *(void * *)(var_r29 + temp_r30);
                if (temp_r11_5 != NULL) {
                    temp_r9_4 = M2C_FIELD(temp_r11_5, void **, 0x19C);
                    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11_5 + M2C_FIELD(temp_r9_4, s16 *, 0xA8), var_f31, var_f30 - temp_f27);
                    temp_r11_6 = *(void * *)(var_r29 + temp_r30);
                    temp_r9_5 = M2C_FIELD(temp_r11_6, void **, 0x19C);
                    var_f31 += M2C_FIELD(temp_r9_5, f32 (**)(void *), 0x234)(temp_r11_6 + M2C_FIELD(temp_r9_5, s16 *, 0x230)) * M2C_FIELD(arg0, f32 *, 0x1D60);
                }
                var_r29 += 4;
                var_r30 -= 1;
            } while (var_r30 != 0);
        }
        temp_r10 = M2C_FIELD(arg0, void **, 0x1C88);
        if (temp_r10 != NULL) {
            temp_r11_7 = M2C_FIELD(temp_r10, void **, 0x19C);
            M2C_FIELD(temp_r11_7, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r10 + M2C_FIELD(temp_r11_7, s16 *, 0xA8), var_f31, var_f30 - lbl_803262C4);
        }
        temp_r10_2 = M2C_FIELD(arg0, void **, 0x1C8C);
        if (temp_r10_2 != NULL) {
            temp_r11_8 = M2C_FIELD(arg0, void **, 0x1C88);
            temp_r29 = M2C_FIELD(temp_r10_2, void **, 0x19C);
            temp_r9_6 = M2C_FIELD(temp_r11_8, void **, 0x19C);
            temp_r29_2 = temp_r29 + 0xA8;
            temp_r30_2 = temp_r10_2 + M2C_FIELD(temp_r29, s16 *, 0xA8);
            M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30_2, (M2C_FIELD(temp_r9_6, f32 (**)(void *), 0x234)(temp_r11_8 + M2C_FIELD(temp_r9_6, s16 *, 0x230)) * M2C_FIELD(arg0, f32 *, 0x1D60)) + var_f31, var_f30 - lbl_803262C4);
        }
        temp_r30_3 = *(void * *)(temp_r30 + ((temp_r27 + 3) * 4));
        if (temp_r30_3 != NULL) {
            temp_r10_3 = M2C_FIELD(temp_r30_3, void **, 0x19C);
            M2C_FIELD(temp_r10_3, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r30_3 + M2C_FIELD(temp_r10_3, s16 *, 0xA8), var_f28 + lbl_80326290, var_f30 - lbl_803262C4);
        }
    }
    M2C_FIELD(arg0, f32 *, 0x2168) = var_f30;
    M2C_FIELD(arg0, f32 *, 0x2164) = var_f28;
}
