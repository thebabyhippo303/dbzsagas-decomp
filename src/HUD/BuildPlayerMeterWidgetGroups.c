/* HUD__BuildPlayerMeterWidgetGroups @ 0x8010CC38 (size: 0x2F8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void HUD__ResetWidgetGroups(void *, void *);
M2C_UNK HUD__BuildMeterWidgetGroup(s32, s32, s32, s32, f32, f32);
M2C_UNK HUD__BuildPlayerHealthMeterSegments(s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32);
extern f32 lbl_803262CC __attribute__((section(".data")));
extern f32 lbl_803262D0 __attribute__((section(".data")));
extern f32 lbl_803262D4;
extern f32 lbl_803262D8 __attribute__((section(".data")));
extern f32 lbl_803262DC __attribute__((section(".data")));
extern f32 lbl_803262E0 __attribute__((section(".data")));
extern f32 lbl_803262E4 __attribute__((section(".data")));
extern f32 lbl_803262E8 __attribute__((section(".data")));
extern f32 lbl_803262EC __attribute__((section(".data")));
extern f32 lbl_803262F0 __attribute__((section(".data")));

void HUD__BuildPlayerMeterWidgetGroups(void *arg0, char *arg1) {
    char *p_2260;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    f32 var_f31;
    s32 temp_r11_3;
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r9_3;
    s32 var_r29;
    s32 var_r30;
    s32 var_r9;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r10_3;
    void *temp_r10_4;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r11_7;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r5;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;

    temp_r30 = arg0 + 0x218C;
    temp_f30 = lbl_803262D0;
    temp_f27 = lbl_803262CC;
    temp_r28 = arg0 + 0x2190;
    HUD__ResetWidgetGroups(arg0, temp_r30);
    M2C_FIELD(arg0, void **, 0x218C) = arg1;
    M2C_FIELD(arg0, f32 *, 0x2678) = temp_f27;
    M2C_FIELD(arg0, f32 *, 0x267C) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0x2684) = (f32) lbl_803262D4;
    M2C_FIELD(arg0, f32 *, 0x2680) = (f32) lbl_803262D4;
    HUD__BuildMeterWidgetGroup((s32) arg0, 0, (s32) temp_r30, 1, temp_f27, temp_f30);
    temp_r10 = M2C_FIELD(arg0, void **, 0x218C);
    temp_f29 = temp_f27 + lbl_803262D8;
    HUD__BuildPlayerHealthMeterSegments((s32) arg0, 0, temp_r28, 0x20FF20, 0xFF2020, 0, temp_f29, temp_f30 + lbl_803262DC, M2C_FIELD(arg0, f32 *, 0x2680), lbl_803262E0, lbl_803262E4, M2C_FIELD(temp_r10, f32 *, 0x288) / M2C_FIELD(temp_r10, f32 *, 0x28C), lbl_803262E8);
    temp_r11 = M2C_FIELD(arg0, void **, 0x2250);
    temp_f28 = lbl_803262EC;
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
    temp_f31 = temp_f30 - temp_f28;
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0xA8), temp_f29, temp_f31);
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x2254);
    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0xA8), temp_f29, temp_f31);
    temp_r11_3 = (s32) (M2C_FIELD(arg0, f32 *, 0x2680) - lbl_803262F0);
    var_r9 = temp_r11_3 - 1;
    if (0 > var_r9) {
        var_r9 = temp_r11_3 + 6;
    }
    temp_r9_3 = var_r9 >> 3;
    var_f31 = temp_f29;
    temp_r27 = temp_r9_3 + 1;
    if ((s32) (temp_r9_3 + 4) > 3) {
        var_r29 = 0xC;
        var_r30 = temp_r27;
        do {
            temp_r11_4 = *(void * *)(var_r29 + temp_r28);
            if (temp_r11_4 != NULL) {
                temp_r9_4 = M2C_FIELD(temp_r11_4, void **, 0x19C);
                M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11_4 + M2C_FIELD(temp_r9_4, s16 *, 0xA8), var_f31, temp_f30 - temp_f28);
                temp_r11_5 = *(void * *)(var_r29 + temp_r28);
                temp_r9_5 = M2C_FIELD(temp_r11_5, void **, 0x19C);
                p_2260 = (char *)arg0 + 0x2260;
                var_f31 += M2C_FIELD(temp_r9_5, f32 (**)(void *), 0x234)(temp_r11_5 + M2C_FIELD(temp_r9_5, s16 *, 0x230)) * M2C_FIELD(p_2260, f32 *, 0xc);
            }
            var_r29 += 4;
            var_r30 -= 1;
        } while (var_r30 != 0);
    }
    temp_r10_2 = M2C_FIELD(arg0, void **, 0x2194);
    if (temp_r10_2 != NULL) {
        temp_r11_6 = M2C_FIELD(temp_r10_2, void **, 0x19C);
        M2C_FIELD(temp_r11_6, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r10_2 + M2C_FIELD(temp_r11_6, s16 *, 0xA8), var_f31, temp_f30 - lbl_803262EC);
    }
    temp_r10_3 = M2C_FIELD(arg0, void **, 0x2198);
    if (temp_r10_3 != NULL) {
        temp_r11_7 = M2C_FIELD(arg0, void **, 0x2194);
        temp_r29 = M2C_FIELD(temp_r10_3, void **, 0x19C);
        temp_r9_6 = M2C_FIELD(temp_r11_7, void **, 0x19C);
        temp_r29_2 = temp_r29 + 0xA8;
        temp_r30_2 = temp_r10_3 + M2C_FIELD(temp_r29, s16 *, 0xA8);
        M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30_2, (M2C_FIELD(temp_r9_6, f32 (**)(void *), 0x234)(temp_r11_7 + M2C_FIELD(temp_r9_6, s16 *, 0x230)) * M2C_FIELD(p_2260, f32 *, 0xc)) + var_f31, temp_f30 - lbl_803262EC);
    }
    temp_r5 = *(void * *)(temp_r28 + ((temp_r27 + 3) * 4));
    if (temp_r5 != NULL) {
        temp_r10_4 = M2C_FIELD(temp_r5, void **, 0x19C);
        M2C_FIELD(temp_r10_4, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r5 + M2C_FIELD(temp_r10_4, s16 *, 0xA8), temp_f27 + lbl_803262D8, temp_f30 - lbl_803262EC);
    }
    M2C_FIELD(arg0, f32 *, 0x2670) = temp_f27;
    M2C_FIELD(arg0, s32 *, 0x2CC8) = 1;
    M2C_FIELD(arg0, f32 *, 0x2674) = temp_f30;
}
