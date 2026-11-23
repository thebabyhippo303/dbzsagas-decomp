/* strtof @ 0x80163054 (size: 0x330, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 isspace(s32);
s32 isdigit(s32, ...);
s32 *__errno();
extern f32 lbl_8033CB18 __attribute__((section(".data")));
extern f64 lbl_8033CB28 __attribute__((section(".data")));
extern f32 lbl_8033CB30 __attribute__((section(".data")));
extern f32 lbl_8036FEC8 __attribute__((section(".data")));
extern s32 lbl_803DC9C0;

f32 strtof(u8 *arg0, u8 **arg1) {
    s32 sp10;
    f32 *var_r11_2;
    f32 var_f13;
    f32 var_f31;
    s32 temp_cr0_lt;
    s32 var_cr0_eq;
    s32 var_r11;
    s32 var_r25;
    s32 var_r27;
    s32 var_r27_2;
    s32 var_r28;
    s32 var_r28_2;
    s32 var_r29;
    s32 var_r9;
    s8 var_r31;
    s8 var_r31_2;
    u8 *var_r30;
    u8 *var_r30_2;
    u8 *var_r30_3;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r0_8;
    u8 temp_r0_9;

    sp10 = M2C_ERROR(/* unknown instruction: mfcr $r12 */);
    var_r25 = 0;
    var_r27 = 0;
    var_r30 = arg0;
loop_2:
    if (isspace((s32) *var_r30) != 0) {
        var_r30 += 1;
        goto loop_2;
    }
    temp_r0 = *var_r30;
    if ((s8) temp_r0 == 0x2D) {
        var_r30 += 1;
    } else if ((s8) temp_r0 == 0x2B) {
        var_r30 += 1;
    }
    var_r28 = -1;
    var_r29 = 0;
loop_11:
    temp_r0_2 = M2C_FIELD(var_r30, f32 *, 0);
    if (isdigit((s32) (s8) temp_r0_2) != 0) {
block_10:
        var_r30 += 1;
        var_r29 += 1;
        goto loop_11;
    }
    temp_cr0_lt = (s8) temp_r0_2 < 0x2E;
    if ((s8) temp_r0_2 == 0x2E) {
        if (temp_cr0_lt != 0) {
            var_r28 = var_r29;
            goto block_10;
        }
    }
    var_r30_2 = var_r30 - var_r29;
    if (temp_cr0_lt != 0) {
        var_r28 = var_r29;
    } else {
        var_r29 -= 1;
    }
    if (var_r29 > 0x12) {
        var_r28_2 = var_r28 - 0x12;
        var_r29 = 0x12;
    } else {
        var_r28_2 = var_r28 - var_r29;
    }
    var_cr0_eq = var_r29 == 0;
    if (var_cr0_eq != 0) {
        var_r30_3 = arg0;
        var_f31 = lbl_8033CB18;
    } else {
        var_r11 = 0;
        if (var_r29 > 9) {
            do {
                temp_r0_3 = *var_r30_2;
                var_r30_2 += 1;
                var_r31 = (s8) temp_r0_3;
                if (var_r31 == 0x2E) {
                    temp_r0_4 = *var_r30_2;
                    var_r30_2 += 1;
                    var_r31 = (s8) temp_r0_4;
                }
                var_r29 -= 1;
                var_r11 = (var_r11 * 0xA) - 0x30 + var_r31;
            } while (var_r29 > 9);
        }
        var_r9 = 0;
        if (var_r29 > 0) {
            do {
                temp_r0_5 = *var_r30_2;
                var_r30_2 += 1;
                var_r31_2 = (s8) temp_r0_5;
                if (var_r31_2 == 0x2E) {
                    temp_r0_6 = *var_r30_2;
                    var_r30_2 += 1;
                    var_r31_2 = (s8) temp_r0_6;
                }
                var_r29 -= 1;
                var_r9 = (var_r9 * 0xA) - 0x30 + var_r31_2;
            } while (var_r29 > 0);
        }
        var_r30_3 = var_r30;
        temp_r0_7 = M2C_FIELD(var_r30_3, u8 *, 0);
        var_f31 = (f32) (((f64) var_r11 * lbl_8033CB28) + (f64) var_r9);
        if ((s8) temp_r0_7 != 0x45) {
            if ((s8) temp_r0_7 == 0x65) {
                goto block_32;
            }
            goto block_41;
        }
block_32:
        temp_r0_8 = M2C_FIELD(var_r30_3, u8 *, 1);
        var_r30_3 += 1;
        if ((s8) temp_r0_8 == 0x2D) {
            var_r25 = 1;
            var_r30_3 += 1;
        } else {
            if ((s8) temp_r0_8 == 0x2B) {
                var_r30_3 += 1;
            }
            var_r25 = 0;
        }
        var_cr0_eq = isdigit((s32) *var_r30_3) == 0;
        if (var_cr0_eq != 0) {
            var_r30_3 = var_r30;
        } else {
loop_40:
            if (isdigit((s32) *var_r30_3) != 0) {
                temp_r0_9 = *var_r30_3;
                var_r30_3 += 1;
                var_r27 = (var_r27 * 0xA) - 0x30 + (s8) temp_r0_9;
                goto loop_40;
            }
block_41:
            if (var_r25 != 0) {
                var_r27_2 = var_r28_2 - var_r27;
            } else {
                var_r27_2 = var_r27 + var_r28_2;
            }
            if (var_r27_2 < 0) {
                var_r27_2 = -var_r27_2;
            }
            if (var_r27_2 > (s32) lbl_803DC9C0) {
                var_r27_2 = lbl_803DC9C0;
                *__errno() = 0x22;
            }
            var_f13 = lbl_8033CB30;
            var_r11_2 = &lbl_8036FEC8;
            var_cr0_eq = var_r27_2 == 0;
            if (var_cr0_eq == 0) {
                do {
                    if (var_r27_2 & 1) {
                        var_f13 *= *var_r11_2;
                    }
                    var_r11_2 += 4;
                    var_r27_2 = var_r27_2 >> 1;
                    var_cr0_eq = var_r27_2 == 0;
                } while (var_cr0_eq == 0);
            }
            if (var_cr0_eq == 0) {
                var_f31 /= var_f13;
            } else {
                var_f31 *= var_f13;
            }
        }
    }
    if (var_cr0_eq == 0) {
        *arg1 = var_r30_3;
    }
    if (var_cr0_eq != 0) {
        return var_f31;
    }
    return -var_f31;
}
