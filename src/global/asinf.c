/* asinf @ 0x8015E8A4 (size: 0x24C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

float sqrtf(float);
extern f32 lbl_803DC728;
extern f32 lbl_803DC72C;
extern f32 lbl_803DC730;
extern f32 lbl_803DC734;
extern f32 lbl_803DC738;
extern f32 lbl_803DC73C;
extern f32 lbl_803DC740;
extern f32 lbl_803DC744;
extern f32 lbl_803DC748;
extern f32 lbl_803DC74C;
extern f32 lbl_803DC750;
extern f32 lbl_803DC754 __attribute__((section(".data")));
extern f32 lbl_803DC758;
extern f32 lbl_803DC75C;
extern f32 lbl_803DC760;
extern f32 lbl_803DC764;
extern f32 lbl_803DC768;
extern f32 lbl_803DC76C;

f32 asinf(f32 farg0) {
    f32 sp8;                                        /* compiler-managed */
    f32 var_f1;
    f32 temp_f30_2;
    f32 temp_f1_2;
    f32 temp_f31;
    f32 temp_f1_3;
    register s32 temp_r11;

    sp8 = farg0;
    temp_r11 = 0x7FFFFFFF & M2C_BITWISE(s32, sp8);
    if (temp_r11 == 0x3F800000) {
        var_f1 = lbl_803DC728;
        if (M2C_BITWISE(s32, sp8) <= 0) {
            return lbl_803DC72C;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return var_f1;
    }
    if (temp_r11 <= 0x3F800000) {
        if (temp_r11 <= 0x3EFFFFFF) {
            if (temp_r11 <= 0x23000000) {
                return lbl_803DC730;
            }
            temp_f30_2 = farg0 * farg0;
            return lbl_803DC764 - (farg0 - (lbl_803DC760 - (farg0 * ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * (lbl_803DC738 + (temp_f30_2 * lbl_803DC734))) + lbl_803DC73C)) + lbl_803DC740)) + lbl_803DC744)) + lbl_803DC748)) / ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * lbl_803DC74C) + lbl_803DC750)) + lbl_803DC754)) + lbl_803DC758)) + lbl_803DC75C)))));
    } else {
        temp_f1_3 = farg0 - farg0;
        return temp_f1_3 / temp_f1_3;
    }
    }
    if (M2C_BITWISE(s32, sp8) < 0) {
        temp_f30_2 = (farg0 + lbl_803DC75C) * lbl_803DC768;
        temp_f31 = temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * lbl_803DC734) + lbl_803DC738)) + lbl_803DC73C)) + lbl_803DC740)) + lbl_803DC744)) + lbl_803DC748);
        temp_f1_3 = (temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * lbl_803DC74C) + lbl_803DC750)) + lbl_803DC754)) + lbl_803DC758)) + lbl_803DC75C;
        temp_f1_2 = sqrtf(temp_f30_2);
        var_f1 = lbl_803DC76C - (2.0f * (temp_f1_2 + ((temp_f1_2 * (temp_f31 / temp_f1_3)) - lbl_803DC760)));
        return var_f1;
    } else {
        temp_f31 = lbl_803DC75C;
        temp_f30_2 = (temp_f31 - farg0) * lbl_803DC768;
        temp_f1_2 = sqrtf(temp_f30_2);
        sp8 = temp_f1_2;
        sp8 = M2C_BITWISE(s32, sp8) & 0xFFFFF000;
        temp_f1_3 = M2C_BITWISE(f32, sp8);
        return 2.0f * (temp_f1_3 + ((((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * lbl_803DC734) + lbl_803DC738)) + lbl_803DC73C)) + lbl_803DC740)) + lbl_803DC744)) + lbl_803DC748)) / ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * ((temp_f30_2 * lbl_803DC74C) + lbl_803DC750)) + lbl_803DC754)) + lbl_803DC758)) + temp_f31)) * temp_f1_2) + ((temp_f30_2 - (temp_f1_3 * temp_f1_3)) / (f32) (temp_f1_2 + temp_f1_3))));
    }
}
