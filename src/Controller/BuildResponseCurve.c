/* Controller__BuildResponseCurve @ 0x801D5150 (size: 0x2F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float powf(float, float);
f32 expf(f32, f32, f32, f32, f32, f32, f32);
extern f32 lbl_80342518 __attribute__((section(".data")));
extern f32 lbl_80342528 __attribute__((section(".data")));
extern f64 lbl_80342530 __attribute__((section(".data")));
extern f32 lbl_80342538 __attribute__((section(".data")));
extern f32 lbl_8034253C __attribute__((section(".data")));
extern f32 lbl_80342540 __attribute__((section(".data")));

s32 Controller__BuildResponseCurve(s32 arg1, u32 arg2, s32 arg3, f32 farg0, f32 farg1, f32 farg2) {
    s32 sp1C;
    f32 *var_r28;
    f32 *var_r31;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f27;
    f32 temp_f28;
    f32 temp_f31;
    f32 var_f0;
    f32 var_f29;
    f32 var_f30;
    f32 var_f31;
    s32 temp_cr0_eq;
    s32 temp_r0;
    s32 temp_r21;
    s32 var_r25;
    s32 var_r30;
    s32 var_r6;
    u32 temp_r27;
    u32 var_r29;

    var_f31 = saved_reg_f31;
    sp1C = M2C_ERROR(/* unknown instruction: mfcr $r12 */);
    temp_r27 = arg2 >> 1U;
    var_f30 = farg0;
    var_f29 = lbl_80342518;
    temp_f0 = (f32) (f64) temp_r27 * farg1 * lbl_80342528;
    if (!(temp_f0 >= (f32) lbl_80342530)) {
        var_r25 = (s32) temp_f0;
    } else {
        var_r25 = (s32) ((f64) temp_f0 - lbl_80342530) ^ 0x80000000;
    }
    temp_f0_2 = (f32) (f64) temp_r27 * farg2 * lbl_80342528;
    if (!(temp_f0_2 >= (f32) lbl_80342530)) {
        var_r6 = (s32) temp_f0_2;
    } else {
        var_r6 = (s32) ((f64) temp_f0_2 - lbl_80342530) ^ 0x80000000;
    }
    temp_r21 = temp_r27 - var_r6;
    temp_f28 = lbl_80342538 / (((f32) (f64) temp_r27 - lbl_80342538) * ((lbl_8034253C - farg1) - farg2) * lbl_80342528);
    if (var_f30 == lbl_80342518) {
        var_f30 = lbl_80342538;
    }
    temp_r0 = temp_r27 + 1;
    var_r30 = 0;
    if (temp_r0 > 0) {
        var_r31 = (temp_r27 * 4) + arg1;
        temp_f27 = lbl_80342540;
        var_r28 = var_r31;
        var_r29 = temp_r27;
        do {
            if (var_r30 <= var_r25) {
                var_f31 = lbl_80342518;
            } else if ((var_r30 >= temp_r21) && (var_r30 != temp_r21)) {
                var_f31 = lbl_80342538;
            } else {
                temp_cr0_eq = arg3 == 1;
                if (temp_cr0_eq == 0) {
                    if (arg3 <= 1) {
                        if (temp_cr0_eq == 0) {

                        } else {
                            var_f31 = var_f29 * var_f30;
                        }
                    } else if (temp_cr0_eq == 0) {
                        if (arg3 != 3) {

                        } else {
                            var_f31 = __builtin_fabsf(powf(var_f29, var_f30));
                        }
                    } else {
                        temp_f31 = expf(var_f29, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */));
                        var_f31 = ((temp_f31 - temp_f27) / expf(lbl_80342538, M2C_ERROR(/* Read from unset register $f2 */), M2C_ERROR(/* Read from unset register $f3 */), M2C_ERROR(/* Read from unset register $f4 */), M2C_ERROR(/* Read from unset register $f5 */), M2C_ERROR(/* Read from unset register $f6 */), M2C_ERROR(/* Read from unset register $f7 */))) * var_f30;
                    }
                } else {
                    var_f31 = var_f29 * var_f29 * var_f30;
                }
                var_f29 += temp_f28;
            }
            var_f0 = lbl_80342538;
            if ((var_f31 > var_f0) || (var_f0 = lbl_80342518, ((var_f31 >= var_f0) == 0))) {
                var_f31 = var_f0;
            }
            if ((s32) var_r29 >= 0) {
                *var_r28 = -var_f31;
            }
            if ((s32) (temp_r27 + var_r30) < (s32) arg2) {
                *var_r31 = var_f31;
            }
            var_r30 += 1;
            var_r31 += 4;
            var_r28 -= 4;
            var_r29 -= 1;
        } while (var_r30 < temp_r0);
    }
    return 1;
}

