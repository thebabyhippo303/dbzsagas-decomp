/* Camera__ComputeFollowSmoothingFactors @ 0x800CB6A4 (size: 0x214, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
#define M2C_BITWISE(type, expr) ({ union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * fn_801D6674(void *, int);
float powf(float, float);
extern f32 lbl_80321B24 __attribute__((section(".data")));
extern f32 lbl_80321B28 __attribute__((section(".data")));
extern f32 lbl_80321B2C __attribute__((section(".data")));
extern void *lbl_803DCC74;

void Camera__ComputeFollowSmoothingFactors(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f29;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f25;
    f32 var_f26;
    f32 var_f30;
    f32 var_f31;
    s32 temp_r0;
    void *temp_r3;

    temp_r3 = fn_801D6674(lbl_803DCC74, M2C_FIELD(arg0, s32 *, 0x40));
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0xDC) != 0) {
        var_f25 = M2C_FIELD(temp_r3, f32 *, 0x9C);
    } else {
        var_f25 = lbl_80321B24;
    }
    temp_r0 = M2C_FIELD(temp_r3, s32 *, 0xDC);
    if (temp_r0 != 0) {
        var_f26 = M2C_FIELD(temp_r3, f32 *, 0xA0);
    } else {
        var_f26 = lbl_80321B24;
    }
    if (temp_r0 != 0) {
        var_f30 = M2C_FIELD(temp_r3, f32 *, 0xA4);
    } else {
        var_f30 = lbl_80321B24;
    }
    if (temp_r0 != 0) {
        var_f31 = M2C_FIELD(temp_r3, f32 *, 0xA8);
    } else {
        var_f31 = lbl_80321B24;
    }
    temp_f28 = lbl_80321B28;
    temp_f27 = lbl_80321B2C;
    temp_f1 = powf(var_f31 * temp_f28, temp_f27);
    var_f0 = temp_f1;
    temp_f29 = lbl_80321B24;
    *arg1 = temp_f1;
    if (var_f31 < temp_f29) {
        var_f0 = -var_f0;
    }
    *arg1 = var_f0;
    temp_f1_2 = powf(var_f30 * temp_f28, temp_f27);
    var_f0_2 = temp_f1_2;
    *arg2 = temp_f1_2;
    if (!(var_f30 < temp_f29)) {
        var_f0_2 = -var_f0_2;
    }
    *arg2 = var_f0_2;
    *arg4 = var_f26;
    *arg5 = -var_f25;
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x4C) != 0) {
        *arg3 = *arg1;
        *arg1 = temp_f29;
    } else {
        *arg3 = temp_f29;
    }
    sp8 = *arg1;
    if ((s32) (M2C_BITWISE(s32, sp8) & 0x7F800000) == 0x7F800000) {
        *arg1 = lbl_80321B24;
    }
    spC = *arg2;
    if ((s32) (M2C_BITWISE(s32, spC) & 0x7F800000) == 0x7F800000) {
        *arg2 = lbl_80321B24;
    }
    sp10 = *arg4;
    if ((s32) (M2C_BITWISE(s32, sp10) & 0x7F800000) == 0x7F800000) {
        *arg4 = lbl_80321B24;
    }
    sp14 = *arg5;
    if ((s32) (M2C_BITWISE(s32, sp14) & 0x7F800000) == 0x7F800000) {
        *arg5 = lbl_80321B24;
    }
}

