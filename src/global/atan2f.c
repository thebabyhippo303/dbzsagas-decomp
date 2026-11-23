/* atan2f @ 0x8015EAF0 (size: 0x220, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float fabsf(float);
f32 atanf();                                        /* extern */
extern f32 lbl_803DC770;
extern f32 lbl_803DC774;
extern f32 lbl_803DC778;
extern f32 lbl_803DC77C;
extern f32 lbl_803DC780;
extern f32 lbl_803DC784;
extern f32 lbl_803DC788;
extern f32 lbl_803DC78C;
extern f32 lbl_803DC790;
extern f32 lbl_803DC794;
extern f32 lbl_803DC798;
extern f32 lbl_803DC79C;

f32 atan2f(f32 farg0, f32 farg1) {
    f32 sp8;                                        /* compiler-managed */
    f32 temp_r7;
    f32 var_f13;
    f32 var_f1;
    s32 temp_r0;
    s32 temp_r10;
    s32 temp_r11;
    s32 temp_r31;

    var_f1 = farg0;
    sp8 = farg1;
    temp_r7 = sp8;
    temp_r10 = M2C_BITWISE(s32, temp_r7) & 0x7FFFFFFF;
    sp8 = var_f1;
    temp_r11 = M2C_BITWISE(s32, sp8) & 0x7FFFFFFF;
    if ((temp_r10 > 0x7F800000) || (temp_r11 > 0x7F800000)) {
        return farg1 + var_f1;
    }
    if (M2C_BITWISE(s32, temp_r7) == 0x3F800000) {
        return atanf();
    }
    temp_r31 = (M2C_BITWISE(u32, sp8) >> 0x1FU) | ((M2C_BITWISE(u32, temp_r7) >> 0x1EU) & 2);
    if (temp_r11 == 0) {
        if (temp_r31 != 2) {
            if (temp_r31 > 2) {
                if (temp_r31 != 3) {
                    goto block_11;
                }
                goto block_37;
            }
            if (temp_r31 < 0) {
                goto block_11;
            }
            /* Duplicate return node #55. Try simplifying control flow for better match */
            return var_f1;
        }
        goto block_36;
    }
block_11:
    if (temp_r10 == 0) {
        goto block_12;
    }
    if (temp_r10 == 0x7F800000) {
        if (temp_r11 == temp_r10) {
            switch (temp_r31) {                     /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                return lbl_803DC780;
            case 1:                                 /* switch 1 */
                return lbl_803DC784;
            case 2:                                 /* switch 1 */
                return lbl_803DC788;
            case 3:                                 /* switch 1 */
                return lbl_803DC78C;
            }
        } else {
            switch (temp_r31) {                     /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                return lbl_803DC790;
            case 1:                                 /* switch 2 */
                return lbl_803DC794;
            case 2:                                 /* switch 2 */
block_36:
                return lbl_803DC770;
            case 3:                                 /* switch 2 */
block_37:
                return lbl_803DC774;
            }
        }
    } else if (temp_r11 != 0x7F800000) {
        temp_r0 = (s32) (temp_r11 - temp_r10) >> 0x17;
        if (temp_r0 > 0x3C) {
            var_f13 = lbl_803DC798;
        } else if ((M2C_BITWISE(s32, temp_r7) < 0) && (temp_r0 < -0x3C)) {
            var_f13 = lbl_803DC790;
        } else {
            fabsf(var_f1 / farg1);
            var_f13 = atanf();
        }
        switch (temp_r31) {                         /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            sp8 = var_f13;
            sp8 = M2C_BITWISE(s32, sp8) ^ 0x80000000;
            var_f13 = M2C_BITWISE(f32, sp8);
            /* fallthrough */
        case 0:                                     /* switch 3 */
            return var_f13;
        case 2:                                     /* switch 3 */
            return lbl_803DC770 - (var_f13 - lbl_803DC79C);
        default:                                    /* switch 3 */
            var_f1 = (var_f13 - lbl_803DC79C) - lbl_803DC770;
            /* Duplicate return node #55. Try simplifying control flow for better match */
            return var_f1;
        }
    } else {
block_12:
        var_f1 = lbl_803DC77C;
        if (M2C_BITWISE(s32, sp8) < 0) {
            return lbl_803DC778;
        }
        return var_f1;
    }
}

