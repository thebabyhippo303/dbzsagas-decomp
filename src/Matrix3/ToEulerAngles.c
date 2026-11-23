/* Matrix3__ToEulerAngles @ 0x801AA658 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 atan2f(f32, f32);
f32 Math__Asin(f32);
extern f32 lbl_80341340 __attribute__((section(".data")));
extern f32 lbl_80341344 __attribute__((section(".data")));
extern f32 lbl_80341348 __attribute__((section(".data")));
extern f32 lbl_803DE500;

s32 Matrix3__ToEulerAngles(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f31;
    volatile f32 pad;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x1C);
    if (!(temp_f1 <= lbl_80341340)) {
        return 0;
    }
    temp_f30 = Math__Asin(-temp_f1);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x20);
    var_f1 = lbl_80341344;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x18);
    if (temp_f2 == var_f1) {
        if (temp_f0 == var_f1) {
            var_f31 = var_f1;
        } else if (!(temp_f0 <= var_f1)) {
            var_f31 = lbl_803DE500 * lbl_80341348;
        } else {
            var_f31 = -lbl_803DE500 * lbl_80341348;
        }
    } else {
        var_f31 = atan2f(temp_f0, temp_f2);
    }
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x10);
    temp_f0 = lbl_80341344;
    var_f1_2 = M2C_FIELD(arg0, f32 *, 4);
    if (temp_f2_2 == temp_f0) {
        if (var_f1_2 == temp_f0) {
            var_f1_2 = temp_f0;
        } else if (!(var_f1_2 <= temp_f0)) {
            var_f1_2 = lbl_803DE500 * lbl_80341348;
        } else {
            var_f1_2 = -lbl_803DE500 * lbl_80341348;
        }
    } else {
        var_f1_2 = atan2f(var_f1_2, temp_f2_2);
    }
    M2C_FIELD(arg1, f32 *, 0) = temp_f30;
    M2C_FIELD(arg1, f32 *, 4) = var_f31;
    M2C_FIELD(arg1, f32 *, 8) = var_f1_2;
    return 1;
}
