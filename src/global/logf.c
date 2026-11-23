/* logf @ 0x8015F104 (size: 0x280, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_803DC7E8;
extern f32 lbl_803DC7EC;
extern f32 lbl_803DC7F0;
extern f32 lbl_803DC7F4;
extern f32 lbl_803DC800;
extern f32 lbl_803DC804;
extern f32 lbl_803DC808;
extern f32 lbl_803DC80C;
extern f32 lbl_803DC810;
extern f32 lbl_803DC814;
extern f32 lbl_803DC818;
extern f32 lbl_803DC81C;
extern f32 lbl_803DC820;
extern f32 lbl_803DC824;
extern f32 lbl_803DC828;
extern f32 lbl_803DC82C;

f32 logf(f32 farg0) {
    f32 sp8;                                        /* compiler-managed */
    f32 temp_f0;
    f32 temp_f11_3;
    f32 temp_f13;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f9;
    f32 var_f1_3;
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r7;

    var_f1_3 = farg0;
    sp8 = var_f1_3;
    var_r7 = 0;
    if (M2C_BITWISE(s32, sp8) <= 0x7FFFFF) {
        if (M2C_BITWISE(s32, sp8) & 0x7FFFFFFF) {
            if (M2C_BITWISE(s32, sp8) < 0) {
                return (var_f1_3 - var_f1_3) / lbl_803DC7EC;
        } else {
            return lbl_803DC7E8;
        }
        }
        var_r7 = -0x19;
        var_f1_3 *= lbl_803DC7F0;
        sp8 = var_f1_3;
        goto block_6;
    }
block_6:
    if (M2C_BITWISE(s32, sp8) > 0x7F7FFFFF) {
        return 2.0f * var_f1_3;
    }
    temp_r8 = M2C_BITWISE(s32, sp8) & 0x7FFFFF;
    temp_r7 = var_r7 - 0x7F + (M2C_BITWISE(s32, sp8) >> 0x17);
    var_r7 = (temp_r8 + 0x4AFB20) & 0x800000;
    sp8 = temp_r8 | (var_r7 ^ 0x3F800000);
    temp_r7 = temp_r7 + (var_r7 >> 0x17);
    temp_f3 = M2C_BITWISE(f32, sp8) - lbl_803DC7F4;
    if ((s32) ((temp_r8 + 0xF) & 0x7FFFFF) <= 0xF) {
        var_f1_3 = lbl_803DC7EC;
        if (temp_f3 != var_f1_3) {
            temp_f9 = temp_f3 * temp_f3 * (lbl_803DC80C - (temp_f3 * lbl_803DC808));
            if (temp_r7 == 0) {
                return temp_f3 - temp_f9;
        } else {
            if (temp_r7 != 0) {
                temp_f11_3 = (f32) (f64) temp_r7;
                return (temp_f11_3 * lbl_803DC800) + (temp_f11_3 * lbl_803DC804);
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return var_f1_3;
        }
        }
        temp_f11_3 = (f32) (f64) temp_r7;
        return (temp_f11_3 * lbl_803DC800) - ((temp_f9 - (temp_f11_3 * lbl_803DC804)) - temp_f3);
    }
    temp_f2 = temp_f3 / (temp_f3 + lbl_803DC810);
    temp_f13 = temp_f2 * temp_f2;
    temp_f0 = temp_f13 * temp_f13;
    temp_f9 = (temp_f0 * ((temp_f0 * ((temp_f0 * lbl_803DC814) + lbl_803DC818)) + lbl_803DC81C)) + (temp_f13 * ((temp_f0 * ((temp_f0 * ((temp_f0 * lbl_803DC820) + lbl_803DC824)) + lbl_803DC828)) + lbl_803DC82C));
    temp_f11_3 = (f32) (f64) temp_r7;
    if (((temp_r8 + 0xFFCF5C30) | (0x35C288 - temp_r8)) <= 0) {
        if (temp_r7 != 0) {
            temp_f0 = (temp_f2 * (temp_f3 - temp_f9)) - (temp_f11_3 * lbl_803DC804);
            return (temp_f11_3 * lbl_803DC800) - (temp_f0 - temp_f3);
    } else {
        temp_f0 = temp_f3 * lbl_803DC80C * temp_f3;
        if (temp_r7 == 0) {
            temp_f13 = temp_f0 - (temp_f2 * (temp_f0 + temp_f9));
            goto block_23;
        }
        temp_f0 = temp_f0 - ((temp_f2 * (temp_f0 + temp_f9)) + (temp_f11_3 * lbl_803DC804));
        return (temp_f11_3 * lbl_803DC800) - (temp_f0 - temp_f3);
    }
    }
    temp_f13 = temp_f2 * (temp_f3 - temp_f9);
block_23:
    var_f1_3 = temp_f3 - temp_f13;
    return var_f1_3;
}
