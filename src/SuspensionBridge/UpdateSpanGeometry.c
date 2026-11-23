/* SuspensionBridge__UpdateSpanGeometry @ 0x800FB020 (size: 0x324, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

float sqrtf(float);
M2C_UNK SuspensionBridge__UpdateSpanFromPoint(s32, s32);
extern f32 lbl_8032451C;
extern f32 lbl_80324520;
extern f32 lbl_80324530 __attribute__((section(".data")));
extern f32 lbl_80324534;
extern f32 lbl_80324538 __attribute__((section(".data")));
extern f32 lbl_8032453C __attribute__((section(".data")));
extern f32 lbl_80324540 __attribute__((section(".data")));
extern f32 lbl_80324544;
extern M2C_UNK lbl_8036B558 __attribute__((section(".data")));
extern M2C_UNK lbl_8036B584 __attribute__((section(".data")));
extern M2C_UNK lbl_80394128 __attribute__((section(".data")));
extern f32 lbl_803DE520;

void SuspensionBridge__UpdateSpanGeometry(s32 arg0, s32 arg1) {
    f32 *var_r6;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f1;
    f32 temp_f31;
    f32 var_f13;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f31_2;
    f32 var_f9;
    s32 temp_r7;
    s32 temp_r9;
    s32 temp_r9_2;
    s32 var_r11;
    s32 var_r4;
    s32 var_r5;

    SuspensionBridge__UpdateSpanFromPoint(arg0, arg1);
    var_r4 = 0;
    var_r5 = 0;
    var_r6 = arg0 + 0x4B8;
    do {
        if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
            var_f9 = M2C_FIELD(arg0, f32 *, 0x414);
        } else {
            var_f9 = lbl_8032451C - M2C_FIELD(arg0, f32 *, 0x414);
        }
        temp_r7 = (s32) (var_f9 * lbl_80324520);
        if (temp_r7 > 9) {
            var_f13 = M2C_FIELD(&lbl_8036B558, f32 *, 0x28);
        } else {
            temp_r9 = temp_r7 + 1;
            temp_f10 = *(f32 *)((char *)&lbl_8036B558 + (temp_r7 * 4));
            temp_f13 = (f32) (f64) temp_r7 * lbl_80324530;
            var_f13 = (((var_f9 - temp_f13) / (((f32) (f64) temp_r9 * lbl_80324530) - temp_f13)) * (*(s32 *)((char *)&lbl_8036B558 + (temp_r9 * 4)) - temp_f10)) + temp_f10;
        }
        temp_f13_2 = var_f13 + M2C_FIELD(arg0, f32 *, 0x588);
        if (temp_r7 == 9) {
            M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) ((temp_f13_2 * lbl_803DE520) + M2C_FIELD(arg0, f32 *, 0x480));
        } else {
            M2C_FIELD(arg0, f32 *, 0x4B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x484) - (temp_f13_2 * lbl_803DE520));
        }
        temp_r7 = (s32) (var_f9 * lbl_80324520);
        if (temp_r7 > 8) {
            var_r11 = arg0 + 0x4B8;
            *var_r6 = M2C_FIELD(&lbl_8036B584, f32 *, 0x24);
        } else {
            temp_r9_2 = temp_r7 + 1;
            temp_f10_2 = *(f32 *)((char *)&lbl_8036B584 + (temp_r7 * 4));
            var_r11 = arg0 + 0x4B8;
            temp_f13_3 = (f32) (f64) temp_r7 * lbl_80324530;
            *var_r6 = (((var_f9 - temp_f13_3) / (((f32) (f64) temp_r9_2 * lbl_80324530) - temp_f13_3)) * (*(s32 *)((char *)&lbl_8036B584 + (temp_r9_2 * 4)) - temp_f10_2)) + temp_f10_2;
        }
        var_r4 += 1;
        var_r6 += 4;
        temp_f0 = *(f32 *)(var_r11 + var_r5) * M2C_FIELD(arg0, f32 *, 0x58C);
        *(f32 *)(var_r11 + var_r5) = temp_f0;
        *(s32 *)(var_r11 + var_r5) = temp_f0 * *(s32 *)(arg0 + 0x488 + var_r5);
        var_r5 += 4;
    } while (var_r4 <= 1);
    temp_f13 = M2C_FIELD(arg0, f32 *, 0x414);
    M2C_FIELD(arg0, f32 *, 0x540) = (f32) M2C_FIELD(arg0, f32 *, 0x4B0);
    M2C_FIELD(arg0, f32 *, 0x544) = (f32) M2C_FIELD(arg0, f32 *, 0x4B4);
    M2C_FIELD(arg0, f32 *, 0x548) = (f32) M2C_FIELD(arg0, f32 *, 0x4B8);
    M2C_FIELD(arg0, f32 *, 0x54C) = (f32) M2C_FIELD(arg0, f32 *, 0x4BC);
    if (temp_f13 != lbl_80324534) {
        temp_f13 = lbl_8032451C - temp_f13;
    }
    temp_f31 = temp_f13 - lbl_80324530;
    var_f31_2 = lbl_80324538;
    if (temp_f31 != lbl_80324538) {
        var_f31_2 = temp_f31;
    }
    if (var_f31_2 != lbl_80324538) {
        temp_f1 = sqrtf((M2C_FIELD(&lbl_80394128, f32 *, 0) * M2C_FIELD(&lbl_80394128, f32 *, 0)) + (M2C_FIELD(&lbl_80394128, f32 *, 8) * M2C_FIELD(&lbl_80394128, f32 *, 8))) * lbl_8032453C;
        var_f1 = lbl_8032451C;
        if (!(temp_f1 >= lbl_8032451C)) {
            var_f1 = temp_f1;
        }
        var_f1_2 = var_f31_2 * (var_f1 * lbl_80324544) * (lbl_803DE520 * lbl_80324540);
        if (!(M2C_FIELD(arg0, s32 *, 0x770) & 0x20000000)) {
            var_f1_2 = -var_f1_2;
        }
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) (M2C_FIELD(arg0, f32 *, 0x4B0) + var_f1_2);
        M2C_FIELD(arg0, f32 *, 0x4B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x4B4) - var_f1_2);
        M2C_FIELD(arg0, f32 *, 0x544) = (f32) (M2C_FIELD(arg0, f32 *, 0x544) + var_f1_2);
        M2C_FIELD(arg0, f32 *, 0x540) = (f32) (M2C_FIELD(arg0, f32 *, 0x540) - var_f1_2);
    }
}
