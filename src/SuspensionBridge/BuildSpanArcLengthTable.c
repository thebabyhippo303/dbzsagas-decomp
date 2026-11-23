/* SuspensionBridge__BuildSpanArcLengthTable @ 0x800FA434 (size: 0x248, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

float sqrtf(float);
M2C_UNK fn_801A2854(s32, s32, s32, f32);
extern f32 lbl_803244F4 __attribute__((section(".data")));
extern f32 lbl_80324500 __attribute__((section(".data")));
extern M2C_UNK lbl_80394CC0 __attribute__((section(".data")));

void SuspensionBridge__BuildSpanArcLengthTable(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 flag;
    s32 ld_8;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp40;
    f32 sp30;
    M2C_UNK spC;
    f32 sp8;
    M2C_UNK *var_r31;
    f32 *var_r10;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f30;
    f32 temp_f7;
    f32 var_f11;
    f32 var_f9;
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r8;
    s32 var_r30;
    s32 var_r30_2;
    s32 var_r4;
    s32 var_r6;
    s32 var_r7;
    void *var_r11;

    sp30 = M2C_FIELD(arg1, f32 *, 0);
    sp8 = lbl_803244F4;
    var_r30 = 1;
    temp_f30 = lbl_80324500;
    M2C_FIELD(&sp30, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    ld_8 = M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(&sp30, s32 *, 8) = (s32) ld_8;
    var_r31 = &spC;
    do {
        var_r30 += 1;
        fn_801A2854((s32) arg1, (s32) &sp40, 0, (f32) (f64) var_r30 * temp_f30);
        temp_f0 = sp40 - sp30;
        temp_f10 = temp_f0 * temp_f0;
        temp_f12 = M2C_FIELD(&sp40, s32 *, 4) - M2C_FIELD(&sp30, s32 *, 4);
        sp50 = temp_f0;
        temp_f13 = M2C_FIELD(&sp40, s32 *, 8) - M2C_FIELD(&sp30, s32 *, 8);
        sp60 = temp_f10;
        sp64 = temp_f12 * temp_f12;
        sp54 = temp_f12;
        sp68 = temp_f13 * temp_f13;
        sp58 = temp_f13;
        M2C_FIELD(var_r31, f32 *, 0) = (f32) (M2C_FIELD(var_r31, f32 *, -4) + sqrtf(temp_f10 + M2C_FIELD(&sp60, f32 *, 4) + M2C_FIELD(&sp60, f32 *, 8)));
        var_r31 += 4;
        M2C_FIELD(&sp30, s32 *, 4) = (s32) M2C_FIELD(&sp40, s32 *, 4);
        sp30 = sp40;
        M2C_FIELD(&sp30, s32 *, 8) = (s32) M2C_FIELD(&sp40, s32 *, 8);
    } while (var_r30 <= 9);
    temp_r5 = arg2 * 0x50;
    var_r30_2 = 0;
    var_f11 = M2C_FIELD(&spC, f32 *, 0x20) / (f32) (f64) arg3;
    *(f32 *)((char *)&lbl_80394CC0 + temp_r5) = lbl_803244F4;
    var_r6 = 1;
    flag = var_r6 <= 9;
    var_f9 = lbl_803244F4;
    temp_f7 = var_f11;
    if (arg3 > 0) {
        var_r10 = &sp8;
        var_r7 = 4;
        var_r4 = 4;
        while (var_r30_2 < arg3) {
            temp_r8 = var_r30_2 + 1;
            if ((flag) && !(var_f11 <= *(s32 *)(var_r7 + &sp8))) {
                var_r11 = var_r4 + &sp8;
loop_7:
                var_r6 += 1;
                var_f9 += lbl_80324500;
                var_r10 += 4;
                var_r7 += 4;
                var_r4 += 4;
                if (flag) {
                    temp_f0_2 = M2C_FIELD(var_r11, f32 *, 4);
                    var_r11 += 4;
                    if (var_f11 > temp_f0_2) {
                        goto loop_7;
                    }
                }
            }
            temp_f12_2 = *var_r10;
            temp_r0 = (temp_r8 << 2) + temp_r5;
            var_r30_2 = temp_r8;
            temp_f0_3 = (((var_f11 - temp_f12_2) / (*(s32 *)(var_r7 + &sp8) - temp_f12_2)) * lbl_80324500) + var_f9;
            var_f11 += temp_f7;
            *(f32 *)((char *)&lbl_80394CC0 + temp_r0) = temp_f0_3;
        }
    }
}
