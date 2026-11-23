/* atanf @ 0x8015FB70 (size: 0x210, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float fabsf(float);
extern f32 lbl_803DC8C0;
extern f32 lbl_803DC8C4;
extern f32 lbl_803DC8C8;
extern f32 lbl_803DC8CC;
extern f32 lbl_803DC8D0;
extern M2C_UNK lbl_803DDB20;
extern f32 lbl_803DDB2C;
extern M2C_UNK lbl_803DDB30;
extern f32 lbl_803DDB3C;
extern f32 lbl_803DDB40;
extern f32 lbl_803DDB44;
extern f32 lbl_803DDB48;
extern f32 lbl_803DDB4C;
extern f32 lbl_803DDB50;
extern f32 lbl_803DDB54;
extern f32 lbl_803DDB58;
extern f32 lbl_803DDB5C;
extern f32 lbl_803DDB60;
extern f32 lbl_803DDB64;
extern f32 lbl_803DDB68;

f32 atanf(f32 farg0) {
    f32 sp8;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f5;
    f32 temp_f6;
    f32 var_f1;
    f32 var_f5;
    s32 temp_r0;
    s32 temp_r31;
    s32 var_r0;

    var_f5 = farg0;
    sp8 = var_f5;
    temp_r31 = M2C_BITWISE(s32, sp8) & 0x7FFFFFFF;
    if (temp_r31 > 0x507FFFFF) {
        if (temp_r31 > 0x7F800000) {
            return 2.0f * var_f5;
        }
        if (M2C_BITWISE(s32, sp8) > 0) {
            return lbl_803DDB2C + lbl_803DDB3C;
        }
        return -lbl_803DDB2C - lbl_803DDB3C;
    }
    if (temp_r31 <= 0x3EDFFFFF) {
        if ((temp_r31 <= 0x30FFFFFF) && ((var_f5 + lbl_803DC8C0) > lbl_803DC8C4)) {
            return var_f5;
        }
        var_r0 = -1;
        goto block_18;
    }
    temp_f5 = fabsf(var_f5);
    if (temp_r31 <= 0x3F97FFFF) {
        if (temp_r31 <= 0x3F2FFFFF) {
            var_r0 = 0;
            var_f5 = ((2.0f * temp_f5) - lbl_803DC8C4) / (temp_f5 + lbl_803DC8C8);
        } else {
            var_r0 = 1;
            var_f5 = (temp_f5 - lbl_803DC8C4) / (temp_f5 + lbl_803DC8C4);
        }
    } else if (temp_r31 <= 0x401BFFFF) {
        var_r0 = 2;
        var_f5 = (temp_f5 - lbl_803DC8CC) / ((temp_f5 * lbl_803DC8CC) + lbl_803DC8C4);
    } else {
        var_r0 = 3;
        var_f5 = lbl_803DC8D0 / temp_f5;
    }
block_18:
    temp_f6 = var_f5 * var_f5;
    temp_f12 = temp_f6 * temp_f6;
    temp_f1 = temp_f6 * ((temp_f12 * ((temp_f12 * ((temp_f12 * ((temp_f12 * ((temp_f12 * lbl_803DDB68) + lbl_803DDB60)) + lbl_803DDB58)) + lbl_803DDB50)) + lbl_803DDB48)) + lbl_803DDB40);
    temp_f0 = temp_f12 * ((temp_f12 * ((temp_f12 * ((temp_f12 * ((temp_f12 * lbl_803DDB64) + lbl_803DDB5C)) + lbl_803DDB54)) + lbl_803DDB4C)) + lbl_803DDB44);
    if (var_r0 < 0) {
        return var_f5 - (var_f5 * (temp_f1 + temp_f0));
    }
    temp_r0 = var_r0 * 4;
    var_f1 = *(&lbl_803DDB20 + temp_r0) - (((var_f5 * (temp_f1 + temp_f0)) - *(&lbl_803DDB30 + temp_r0)) - var_f5);
    if (M2C_BITWISE(s32, sp8) < 0) {
        var_f1 = -var_f1;
    }
    return var_f1;
}

