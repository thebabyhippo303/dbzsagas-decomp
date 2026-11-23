/* ButtonPromptBar__UpdateLayout @ 0x802624A4 (size: 0x440, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 SphereText__GetAlignment(void *);
void Sphere__UpdateLayout(void *);
extern f32 lbl_80349BE0 __attribute__((section(".data")));
extern f32 lbl_80349BE4 __attribute__((section(".data")));
extern f32 lbl_80349BE8 __attribute__((section(".data")));
extern f32 lbl_80349BF8 __attribute__((section(".data")));
extern f32 lbl_80349BFC __attribute__((section(".data")));
extern f32 lbl_80349C00 __attribute__((section(".data")));

void ButtonPromptBar__UpdateLayout(void *arg0) {
    f32 sp68;
    union { M2C_UNK value; unsigned char bytes[92]; } spC;
    M2C_UNK sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f26;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_r9_3;
    f32 temp_r9_4;
    f32 var_f22;
    f32 var_f23;
    f32 var_f24;
    f32 var_f25;
    f32 var_f28;
    f32 var_f29;
    f32 var_f30;
    f32 var_f31;
    s32 var_cr0_eq;
    s32 var_r24;
    s32 var_r27;
    s32 var_r27_2;
    s32 var_r29;
    u32 var_r26;
    u32 var_r26_2;
    void *temp_r30;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_12;
    void *temp_r9_2;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r25;
    void *var_r30;
    void *var_r31;

    var_f25 = lbl_80349BE0;
    var_f23 = lbl_80349BE4;
    temp_f30 = lbl_80349BE8;
    var_f31 = var_f25;
    var_f22 = var_f23;
    var_r27 = 0;
    var_r26 = 0U;
    var_r29 = 0;
    var_r30 = arg0 + 0x1A0;
    do {
        temp_r9 = M2C_FIELD(var_r30, void **, 0x19C);
        temp_r9_2 = M2C_FIELD(var_r30, void **, 0x19C);
        temp_f1 = M2C_FIELD(temp_r9, f32 (**)(void *), 0x234)(var_r30 + M2C_FIELD(temp_r9, s16 *, 0x230)) + temp_f30;
        *(f32 *)(var_r29 + &sp8) = temp_f1;
        temp_f1_2 = M2C_FIELD(temp_r9_2, f32 (**)(void *, f32), 0x23C)(var_r30 + M2C_FIELD(temp_r9_2, s16 *, 0x238), temp_f1);
        *(f32 *)(var_r29 + ((M2C_UNK *)spC.bytes)) = temp_f1_2;
        temp_f0 = *(f32 *)(var_r29 + &sp8);
        sp68 = temp_f0;
        if (M2C_BITWISE(s32, sp68) > 0) {
            sp68 = temp_f1_2;
            if (M2C_BITWISE(s32, sp68) > 0) {
                var_r27 += 1;
                if (!(var_f25 >= temp_f1_2)) {
                    var_f25 = temp_f1_2;
                }
                var_f31 += temp_f0;
            }
        }
        var_r26 += 1;
        var_r29 += 8;
        var_r30 += 0x550;
    } while (var_r26 <= 0xBU);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = var_f31;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = var_f25;
    }
    temp_f13 = M2C_BITWISE(f32, M2C_FIELD(arg0, s32 *, 0x2C));
    sp68 = var_f31;
    temp_r9_3 = sp68;
    sp68 = temp_f13;
    if (M2C_BITWISE(s32, sp68) < M2C_BITWISE(s32, temp_r9_3)) {
        var_f22 = temp_f13 / var_f31;
    }
    temp_f0_2 = M2C_BITWISE(f32, M2C_FIELD(arg0, s32 *, 0x30));
    sp68 = var_f25;
    temp_r9_4 = sp68;
    sp68 = temp_f0_2;
    var_cr0_eq = M2C_BITWISE(s32, sp68) == M2C_BITWISE(s32, temp_r9_4);
    if (M2C_BITWISE(s32, sp68) < M2C_BITWISE(s32, temp_r9_4)) {
        var_f23 = temp_f0_2 / var_f25;
    }
    temp_f12 = temp_f13 - var_f31;
    var_f24 = lbl_80349BE0;
    if (M2C_BITWISE(s32, sp68) > M2C_BITWISE(s32, temp_r9_4)) {
        sp68 = temp_f12;
        var_cr0_eq = M2C_BITWISE(s32, sp68) == 0;
        if (M2C_BITWISE(s32, sp68) > 0) {
            var_f24 = temp_f12 / (f32) (f64) (var_r27 - 1);
        }
    }
    var_f28 = lbl_80349BE0;
    temp_f21 = temp_f0_2 * lbl_80349BF8;
    if (var_cr0_eq != 0) {
        var_f28 = temp_f12 * lbl_80349BFC;
        var_f24 = var_f28;
    } else if (var_r27 == 1) {
        var_f28 = temp_f12 * lbl_80349BF8;
    }
    temp_f27 = lbl_80349BE0;
    temp_f26 = lbl_80349BF8;
    var_r26_2 = 0U;
    temp_f20 = lbl_80349C00;
    var_r25 = arg0 + 0x4F0;
    var_r31 = arg0 + 0x1A0;
    var_r27_2 = 0;
    var_r24 = 0;
    do {
        var_f30 = *(f32 *)(var_r24 + (arg0 + 0x6E4));
        var_f29 = *(f32 *)(var_r24 + (arg0 + 0x6E8));
        if (var_f30 == temp_f27) {
            var_f30 = lbl_80349BE4;
        }
        if (var_f29 == temp_f27) {
            var_f29 = lbl_80349BE4;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4160) == 0) {
            temp_f0_3 = *(f32 *)(var_r27_2 + &sp8);
            sp68 = temp_f0_3;
            if ((M2C_BITWISE(s32, sp68) > 0) && ((s32) *(s32 *)(var_r27_2 + ((M2C_UNK *)spC.bytes)) > 0)) {
                temp_r9_5 = M2C_FIELD(var_r31, void **, 0x19C);
                temp_f28 = (temp_f0_3 * temp_f26) + var_f28;
                M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, f32, f32), 0x8C)(var_r31 + M2C_FIELD(temp_r9_5, s16 *, 0x88), temp_f0_3, var_f25);
                temp_r9_6 = M2C_FIELD(var_r31, void **, 0x19C);
                M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, f32, f32), 0xAC)(var_r31 + M2C_FIELD(temp_r9_6, s16 *, 0xA8), temp_f28 * var_f22, temp_f21 * var_f23);
                temp_r9_7 = M2C_FIELD(var_r31, void **, 0x19C);
                M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, f32, f32), 0xCC)(var_r31 + M2C_FIELD(temp_r9_7, s16 *, 0xC8), var_f22 * var_f30, var_f23 * var_f29);
                temp_r9_8 = M2C_FIELD(var_r31, void **, 0x19C);
                M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, f32, f32), 0xEC)(var_r31 + M2C_FIELD(temp_r9_8, s16 *, 0xE8), temp_f26, temp_f26);
                var_f28 = (*(s32 *)(var_r27_2 + &sp8) * temp_f26) + temp_f28 + var_f24;
            }
        } else {
            temp_r9_9 = M2C_FIELD(var_r31, void **, 0x19C);
            M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *, f32, f32), 0x8C)(var_r31 + M2C_FIELD(temp_r9_9, s16 *, 0x88), *(s32 *)(var_r27_2 + &sp8), var_f25);
            temp_r9_10 = M2C_FIELD(var_r31, void **, 0x19C);
            temp_r30 = var_r31 + M2C_FIELD(temp_r9_10, s16 *, 0xA8);
            temp_f31 = M2C_FIELD(temp_r9_10, f32 (**)(void *), 0x234)(var_r31 + M2C_FIELD(temp_r9_10, s16 *, 0x230));
            M2C_FIELD((temp_r9_10 + 0xA8), M2C_UNK (**)(void *, f32, f32), 4)(temp_r30, temp_f31 * (SphereText__GetAlignment(var_r25) * temp_f20), temp_f27);
            temp_r9_11 = M2C_FIELD(var_r31, void **, 0x19C);
            M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *, f32, f32), 0xCC)(var_r31 + M2C_FIELD(temp_r9_11, s16 *, 0xC8), var_f30, var_f29);
            temp_r9_12 = M2C_FIELD(var_r31, void **, 0x19C);
            M2C_FIELD(temp_r9_12, M2C_UNK (**)(void *, f32, f32), 0xEC)(var_r31 + M2C_FIELD(temp_r9_12, s16 *, 0xE8), temp_f27, temp_f27);
        }
        var_r26_2 += 1;
        var_r25 += 0x550;
        var_r31 += 0x550;
        var_r27_2 += 8;
        var_r24 += 0x550;
    } while (var_r26_2 <= 0xBU);
    Sphere__UpdateLayout(arg0);
}
