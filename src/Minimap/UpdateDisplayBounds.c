/* Minimap__UpdateDisplayBounds @ 0x8011818C (size: 0x2CC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_803268F0;
extern f32 lbl_803268F4 __attribute__((section(".data")));
extern void *lbl_803DC660;
extern void *lbl_803DC668;

void Minimap__UpdateDisplayBounds(void) {
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f30;
    f32 temp_f31;
    f32 var_f28;
    f32 var_f29;
    f32 var_f30;
    f32 var_f4;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;

    temp_r9 = M2C_FIELD(lbl_803DC660, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32 *, f32 *), 0xB4)(lbl_803DC660 + M2C_FIELD(temp_r9, s16 *, 0xB0), &sp8, &spC);
    temp_r9_2 = M2C_FIELD(lbl_803DC660, void **, 0x19C);
    temp_f1 = M2C_FIELD(temp_r9_2, f32 (**)(void *), 0x234)(lbl_803DC660 + M2C_FIELD(temp_r9_2, s16 *, 0x230)) * M2C_FIELD(lbl_803DC660, f32 *, 0x34) * M2C_FIELD(lbl_803DC660, f32 *, 0x3C);
    sp8 -= temp_f1;
    temp_r9_3 = M2C_FIELD(lbl_803DC660, void **, 0x19C);
    temp_f1_2 = M2C_FIELD(temp_r9_3, f32 (**)(void *, f32), 0x23C)(lbl_803DC660 + M2C_FIELD(temp_r9_3, s16 *, 0x238), temp_f1) * M2C_FIELD(lbl_803DC660, f32 *, 0x38) * M2C_FIELD(lbl_803DC660, f32 *, 0x40);
    spC -= temp_f1_2;
    temp_r9_4 = M2C_FIELD(lbl_803DC668, void **, 0x19C);
    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, f32 *, f32 *, f32), 0xB4)(lbl_803DC668 + M2C_FIELD(temp_r9_4, s16 *, 0xB0), &sp10, &sp14, temp_f1_2);
    temp_r9_5 = M2C_FIELD(lbl_803DC668, void **, 0x19C);
    temp_f1_3 = M2C_FIELD(temp_r9_5, f32 (**)(void *), 0x234)(lbl_803DC668 + M2C_FIELD(temp_r9_5, s16 *, 0x230)) * M2C_FIELD(lbl_803DC668, f32 *, 0x34) * M2C_FIELD(lbl_803DC668, f32 *, 0x3C);
    sp10 -= temp_f1_3;
    temp_r9_6 = M2C_FIELD(lbl_803DC668, void **, 0x19C);
    temp_f1_4 = M2C_FIELD(temp_r9_6, f32 (**)(void *, f32), 0x23C)(lbl_803DC668 + M2C_FIELD(temp_r9_6, s16 *, 0x238), temp_f1_3) * M2C_FIELD(lbl_803DC668, f32 *, 0x38) * M2C_FIELD(lbl_803DC668, f32 *, 0x40);
    sp14 -= temp_f1_4;
    temp_r9_7 = M2C_FIELD(lbl_803DC668, void **, 0x19C);
    temp_f30 = M2C_FIELD(temp_r9_7, f32 (**)(void *, f32), 0x234)(lbl_803DC668 + M2C_FIELD(temp_r9_7, s16 *, 0x230), temp_f1_4) * M2C_FIELD(lbl_803DC668, f32 *, 0x34);
    temp_r9_8 = M2C_FIELD(lbl_803DC668, void **, 0x19C);
    temp_f31 = M2C_FIELD(temp_r9_8, f32 (**)(void *), 0x23C)(lbl_803DC668 + M2C_FIELD(temp_r9_8, s16 *, 0x238)) * M2C_FIELD(lbl_803DC668, f32 *, 0x38);
    temp_r9_9 = M2C_FIELD(lbl_803DC660, void **, 0x19C);
    var_f28 = (sp8 - sp10) / temp_f30;
    temp_f1_5 = ((M2C_FIELD(temp_r9_9, f32 (**)(void *), 0x234)(M2C_FIELD(temp_r9_9, s16 *, 0x230) + lbl_803DC660) * M2C_FIELD(lbl_803DC660, f32 *, 0x34)) + sp8) - sp10;
    temp_r9_10 = M2C_FIELD(lbl_803DC660, void **, 0x19C);
    var_f29 = temp_f1_5 / temp_f30;
    var_f30 = (spC - sp14) / temp_f31;
    var_f4 = (((M2C_FIELD(temp_r9_10, f32 (**)(void *, f32), 0x23C)(lbl_803DC660 + M2C_FIELD(temp_r9_10, s16 *, 0x238), temp_f1_5) * M2C_FIELD(lbl_803DC660, f32 *, 0x38)) + spC) - sp14) / temp_f31;
    if (!((sp10 != lbl_803268F0) && (sp14 != lbl_803268F0))) {
        return;
    }
    if (!(var_f28 >= lbl_803268F0)) {
        var_f28 = lbl_803268F0;
    }
    if (!(var_f29 <= lbl_803268F4)) {
        var_f29 = lbl_803268F4;
    }
    if (!(var_f30 >= lbl_803268F0)) {
        var_f30 = lbl_803268F0;
    }
    if (!(var_f4 <= lbl_803268F4)) {
        var_f4 = lbl_803268F4;
    }
    temp_r9_11 = M2C_FIELD(lbl_803DC668, void **, 0x19C);
    M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x2D4)(lbl_803DC668 + M2C_FIELD(temp_r9_11, s16 *, 0x2D0), var_f28, var_f30, var_f29, var_f4);
}
