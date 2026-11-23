/* MainMenu__UpdateLetterAnimationState6 @ 0x80115638 (size: 0x390, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Rand__RangeInt(void *, s32, s32);
void Sphere__SetColor(void *, f32, f32, f32, f32);
extern f32 lbl_803267C0 __attribute__((section(".data")));
extern f64 lbl_803267B0;
extern f64 lbl_803267B8;
extern f32 lbl_803267C4 __attribute__((section(".data")));
extern f32 lbl_803267C8 __attribute__((section(".data")));
extern f32 lbl_803267CC __attribute__((section(".data")));
extern f32 lbl_803267D0 __attribute__((section(".data")));
extern f32 lbl_803267D4 __attribute__((section(".data")));
extern u32 lbl_803A35AC __attribute__((section(".data")));
extern void *lbl_803DC3B4;
extern M2C_UNK lbl_803DD634;
extern s32 lbl_8036BCAC[];

void MainMenu__UpdateLetterAnimationState6(void *arg0, s32 arg1, s32 arg2) {
    f32 *var_r9;
    f32 *var_r9_2;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f9;
    s32 temp_r25;
    s32 temp_r27;
    s32 temp_r29;
    s32 temp_r30;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r26;
    s32 var_r28;
    s32 var_r30;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r10_3;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r11_7;
    s32 *r20v;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;

    temp_f0 = (f32) ((f64) lbl_803A35AC - *(f64 *) ((char *) &lbl_803267C0 - 8)) * lbl_803267C0;
    temp_f9 = M2C_FIELD(arg0, f32 *, 0x4C);
    var_r26 = 0;
    temp_f12 = M2C_FIELD(arg0, f32 *, 0x18) + temp_f0;
    M2C_FIELD(arg0, f32 *, 0x18) = temp_f12;
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) + temp_f0);
    temp_f30 = temp_f9 / (f32) ((f64) arg1 - *(f64 *) ((char *) &lbl_803267C0 - 16));
    if (!(temp_f12 > (temp_f9 + lbl_803267C4))) {
        var_r28 = 0;
        if (var_r28 < arg1) {
            temp_r25 = arg2 + 0xC;
            do {
                temp_r27 = var_r28 * 0x9C;
                temp_f31 = M2C_FIELD(arg0, f32 *, 0x18) - ((f32) (f64) var_r26 * temp_f30);
                if (!(M2C_FIELD(arg0, f32 *, 0x14) <= M2C_FIELD(arg0, f32 *, 0x38))) {
                    temp_r30 = var_r28 * 4;
                    temp_r10 = *(void * *)(M2C_FIELD(arg0, s32 *, 0x3AC) + temp_r30);
                    temp_r9 = M2C_FIELD(temp_r10, void **, 0x19C);
                    r20v = lbl_8036BCAC;
                    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, void *, void *), 0x6C)(temp_r10 + M2C_FIELD(temp_r9, s16 *, 0x68), M2C_FIELD(lbl_803DC3B4, s32 *, 0x2C), r20v[Rand__RangeInt(&lbl_803DD634, 0, 7)], 0, 1, 1, temp_r9, temp_r10);
                    if ((s32) M2C_FIELD((temp_r27 + arg2), u8 *, 0x98) == 0x20) {
                        temp_r11 = *(void * *)(M2C_FIELD(arg0, s32 *, 0x3AC) + temp_r30);
                        temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
                        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x108), M2C_FIELD(arg0, f32 *, 0x54), M2C_FIELD(arg0, f32 *, 0x58), M2C_FIELD(arg0, f32 *, 0x5C), lbl_803267C8);
                    }
                    temp_r10_2 = *(void * *)(M2C_FIELD(arg0, s32 *, 0x3AC) + temp_r30);
                    temp_r11_2 = M2C_FIELD(temp_r10_2, void **, 0x19C);
                    M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *), 0x3C)(temp_r10_2 + M2C_FIELD(temp_r11_2, s16 *, 0x38));
                }
                if (!(temp_f31 <= temp_f30)) {
                    temp_r11_3 = M2C_FIELD(arg0, void **, 0x68);
                    var_r26 += 1;
                    var_r30 = var_r28 + 1;
                    temp_r29 = var_r28 * 4;
                    temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x19C);
                    M2C_FIELD(arg0, f32 *, 0x54) = M2C_FIELD(temp_r9_3, f32 (**)(void *), 0x2AC)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 0x2A8));
                    temp_r11_4 = M2C_FIELD(arg0, void **, 0x68);
                    temp_r9_4 = M2C_FIELD(temp_r11_4, void **, 0x19C);
                    M2C_FIELD(arg0, f32 *, 0x58) = M2C_FIELD(temp_r9_4, f32 (**)(void *), 0x2B4)(temp_r11_4 + M2C_FIELD(temp_r9_4, s16 *, 0x2B0));
                    temp_r11_5 = M2C_FIELD(arg0, void **, 0x68);
                    temp_r9_5 = M2C_FIELD(temp_r11_5, void **, 0x19C);
                    var_ctr = 4;
                    M2C_FIELD(arg0, f32 *, 0x5C) = M2C_FIELD(temp_r9_5, f32 (**)(void *), 0x2BC)(temp_r11_5 + M2C_FIELD(temp_r9_5, s16 *, 0x2B8));
                    var_r9 = temp_r27 + temp_r25;
                    do {
                        *var_r9 = (*var_r9 - lbl_803267CC) + lbl_803267CC;
                        var_r9 += 0x20;
                        var_ctr -= 1;
                    } while (var_ctr != 0);
                    temp_r11_6 = *(void * *)(M2C_FIELD(arg0, s32 *, 0x3AC) + temp_r29);
                    temp_r9_6 = M2C_FIELD(temp_r11_6, void **, 0x19C);
                    M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(temp_r11_6 + M2C_FIELD(temp_r9_6, s16 *, 0x108), M2C_FIELD(arg0, f32 *, 0x54), M2C_FIELD(arg0, f32 *, 0x58), M2C_FIELD(arg0, f32 *, 0x5C), lbl_803267C8);
                    temp_r10_3 = *(void * *)(M2C_FIELD(arg0, s32 *, 0x3AC) + temp_r29);
                    temp_r11_7 = M2C_FIELD(temp_r10_3, void **, 0x19C);
                    M2C_FIELD(temp_r11_7, M2C_UNK (**)(void *), 0x3C)(temp_r10_3 + M2C_FIELD(temp_r11_7, s16 *, 0x38));
                } else {
                    var_ctr_2 = 4;
                    var_r26 += 1;
                    var_r30 = var_r28 + 1;
                    var_r9_2 = temp_r27 + temp_r25;
                    do {
                        *var_r9_2 = lbl_803267C8;
                        var_r9_2 += 0x20;
                        var_ctr_2 -= 1;
                    } while (var_ctr_2 != 0);
                }
                var_r28 = var_r30;
            } while (var_r28 < arg1);
        }
        if (!(M2C_FIELD(arg0, f32 *, 0x14) <= (M2C_FIELD(arg0, f32 *, 0x38) + lbl_803267D0))) {
            M2C_FIELD(arg0, f32 *, 0x14) = (f32) lbl_803267C8;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_803267D4;
        M2C_FIELD(arg0, s32 *, 0x3C4) = 3;
        Sphere__SetColor(arg0 + 0x6C, lbl_803267CC, lbl_803267CC, lbl_803267CC, lbl_803267C8);
        Sphere__SetColor(arg0 + 0x20C, lbl_803267CC, lbl_803267CC, lbl_803267CC, lbl_803267C8);
    }
}
