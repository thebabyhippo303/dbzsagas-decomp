/* Runtime__ParseUnsignedInteger @ 0x80163384 (size: 0x198, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern M2C_UNK lbl_8033C9D9 __attribute__((section(".data")));

s32 Runtime__ParseUnsignedInteger(s32 *arg0, u8 *arg1, u8 **arg2, s32 arg3) {
    s32 temp_r0_3;
    s32 temp_r9_2;
    s32 var_cr0_eq;
    s32 var_cr0_lt;
    s32 var_r0;
    s32 var_r11_2;
    s32 var_r30;
    s32 var_r6;
    s32 var_r8;
    s8 var_r11;
    u32 temp_r7;
    u32 var_r3;
    u8 *var_r10;
    u8 *var_r4;
    u8 temp_r0;
    u8 temp_r0_4;
    u8 temp_r9;

    var_r4 = arg1;
    var_r6 = arg3;
    var_r10 = var_r4;
    var_r30 = 0;
    do {
        temp_r9 = *var_r10;
        var_r10 += 1;
        var_r11 = (s8) temp_r9;
    } while (*(var_r11 + &lbl_8033C9D9) & 8);
    if (var_r11 == 0x2D) {
        var_r30 = 1;
        goto block_6;
    }
    if (var_r11 == 0x2B) {
block_6:
        var_r10 += 1;
        var_r11 = (s8) *var_r10;
    }
    if (((var_r6 == 0) || (var_r6 == 0x10)) && (var_r11 == 0x30) && ((temp_r0 = M2C_FIELD(var_r10, u8 *, 0), (((s8) temp_r0 == 0x78) != 0)) || ((s8) temp_r0 == 0x58))) {
        var_r6 = 0x10;
        var_r11 = (s8) M2C_FIELD(var_r10, u8 *, 1);
        var_r10 += 2;
    }
    if (var_r6 == 0) {
        var_r6 = 0xA;
        if (var_r11 == 0x30) {
            var_r6 = 8;
        }
    }
    var_r3 = 0;
    temp_r7 = -1U / (u32) var_r6;
    var_r8 = 0;
    temp_r0_3 = temp_r7 * var_r6;
    M2C_ERROR(/* "cmpwi $cr6, $r5, 0x0" is not supported, the first arg is not $cr0 */);
loop_25:
    temp_r0_4 = *(var_r11 + &lbl_8033C9D9);
    if (temp_r0_4 & 4) {
        var_r11_2 = var_r11 - 0x30;
        goto block_17;
    }
    temp_r9_2 = temp_r0_4 & 3;
    var_cr0_eq = temp_r9_2 == 0;
    var_cr0_lt = temp_r9_2 < 0;
    if (var_cr0_eq == 0) {
        var_r0 = var_r11 - 0x57;
        if (temp_r0_4 & 1) {
            var_r0 = var_r11 - 0x37;
        }
        var_r11_2 = var_r0;
block_17:
        var_cr0_eq = var_r11_2 == var_r6;
        var_cr0_lt = var_r11_2 < var_r6;
        if (var_cr0_lt != 0) {
            if ((var_r8 < 0) || (var_r3 > temp_r7) || (((s32) var_r3 == (s32) temp_r7) && (var_r11_2 > (s32) ~(temp_r0_3 | temp_r0_3)))) {
                var_r8 = -1;
            } else {
                var_r8 = 1;
                var_r3 = (var_r3 * var_r6) + var_r11_2;
            }
            temp_r0_4 = *var_r10;
            var_r10 += 1;
            var_r11 = (s8) temp_r0_4;
            goto loop_25;
        }
    }
    M2C_ERROR(/* "cmpwi $cr7, $r8, 0x0" is not supported, the first arg is not $cr0 */);
    if (var_cr0_lt == 0) {
        var_cr0_eq = var_r30 == 0;
        if (var_cr0_eq == 0) {
            var_r3 = (u32) -(s32) var_r3;
        }
    } else {
        var_r3 = -1U;
        *arg0 = 0x22;
    }
    if (var_cr0_eq == 0) {
        if (!var_cr0_eq) {
            var_r4 = var_r10 - 1;
        }
        *arg2 = var_r4;
    }
    return (s32) var_r3;
}
