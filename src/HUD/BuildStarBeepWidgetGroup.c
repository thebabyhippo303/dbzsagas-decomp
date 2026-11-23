/* HUD__BuildStarBeepWidgetGroup @ 0x80109AF4 (size: 0x228, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * fn_801842C4(unsigned int);
void fn_80260304(void *, float, float);
void fn_8026B590(void *);
M2C_UNK fn_80260708(s32, M2C_UNK);                  /* extern */
M2C_UNK fn_80260728(s32, M2C_UNK);                  /* extern */
M2C_UNK fn_80260788(s32, M2C_UNK);                  /* extern */
extern f32 lbl_80325B60 __attribute__((section(".data")));
extern f32 lbl_80325B64 __attribute__((section(".data")));
extern f32 lbl_80325B68 __attribute__((section(".data")));
extern f32 lbl_80325B6C __attribute__((section(".data")));
extern f32 lbl_80325B70 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern s32 lbl_803DC648;

void HUD__BuildStarBeepWidgetGroup(void *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    f32 temp_f29;
    f32 var_f30;
    f32 var_f31;
    s32 temp_cr0_eq;
    s32 var_r0;
    s32 var_r30;
    void **var_r31;
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;

    var_f30 = farg0;
    var_f31 = farg1;
    M2C_ERROR(/* "cmpwi $cr7, $r0, 0x11" is not supported, the first arg is not $cr0 */);
    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        temp_cr0_eq = (s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 0x13;
        if (temp_cr0_eq != 0) {
            if (temp_cr0_eq != 0) {
                goto block_3;
            }
            var_r0 = 0xB;
            goto block_5;
        }
    } else {
block_3:
        var_r0 = 8;
block_5:
        M2C_FIELD(arg0, s32 *, 0x2F20) = var_r0;
        var_r30 = 0;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2F20) > 0) {
            var_r31 = arg1 + 0x450;
            temp_f29 = lbl_80325B70;
            do {
                fn_8026B590(fn_801842C4(0x1A0U));
                temp_r11 = M2C_ERROR(/* Read from unset register $r3 */);
                *var_r31 = temp_r11;
                if (temp_r11 != NULL) {
                    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
                    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x14)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x10), lbl_803DC648, 1, 0, 1, 1, temp_r9);
                    temp_r10 = *var_r31;
                    temp_r11_2 = M2C_FIELD(temp_r10, void **, 0x19C);
                    M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r10 + M2C_FIELD(temp_r11_2, s16 *, 0xE8), lbl_80325B60, lbl_80325B60);
                    temp_r11_3 = *var_r31;
                    temp_r9_2 = M2C_FIELD(temp_r11_3, void **, 0x19C);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r11_3 + M2C_FIELD(temp_r9_2, s16 *, 0x1B0), 0);
                    temp_r11_4 = *var_r31;
                    temp_r9_3 = M2C_FIELD(temp_r11_4, void **, 0x19C);
                    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r11_4 + M2C_FIELD(temp_r9_3, s16 *, 0xA8), var_f30, var_f31);
                    temp_r11_5 = *var_r31;
                    temp_r9_4 = M2C_FIELD(temp_r11_5, void **, 0x19C);
                    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0x1EC)(temp_r11_5 + M2C_FIELD(temp_r9_4, s16 *, 0x1E8), -1);
                    temp_r11_6 = *var_r31;
                    temp_r9_5 = M2C_FIELD(temp_r11_6, void **, 0x19C);
                    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x3C)(temp_r11_6 + M2C_FIELD(temp_r9_5, s16 *, 0x38));
                    fn_80260728(M2C_FIELD(*var_r31, s32 *, 0x164) + 0x244, 0);
                    fn_80260708(M2C_FIELD(*var_r31, s32 *, 0x164) + 0x244, 1);
                    fn_80260304(M2C_FIELD(*var_r31, s32 *, 0x164) + 0x244, lbl_80325B64, lbl_80325B64);
                    fn_80260304(M2C_FIELD(*var_r31, s32 *, 0x164) + 0x244, lbl_80325B68, lbl_80325B6C);
                    fn_80260788(M2C_FIELD(*var_r31, s32 *, 0x164) + 0x244, 0);
                }
                if (arg2 != 0) {
                    var_f30 += temp_f29;
                } else {
                    var_f31 -= temp_f29;
                }
                var_r30 += 1;
                var_r31 += 4;
            } while (var_r30 < (s32) M2C_FIELD(arg0, s32 *, 0x2F20));
        }
    }
}

