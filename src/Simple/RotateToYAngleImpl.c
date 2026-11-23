/* Simple__RotateToYAngleImpl @ 0x802C63B8 (size: 0x1C4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
void Simple__SetYRot(void *, f32);
extern f32 lbl_803531D8 __attribute__((section(".data")));
extern f32 lbl_803531DC __attribute__((section(".data")));
extern f32 lbl_803531E0 __attribute__((section(".data")));
extern f32 lbl_803DE500;
extern f32 lbl_803DE504;
extern f32 lbl_803DE520;
void Simple__RotateToYAngleImpl(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    f32 var_f1;
    f32 var_f12;
    f32 var_f13;
    f32 temp_f12;
    f32 temp_f10;
    s32 var_r0;
    void *temp_r10;
    void *temp_r11;
    var_f1 = farg0;
    if ((var_f1 > lbl_803531D8) || !(var_f1 >= lbl_803531DC)) {
        var_f1 = lbl_803531E0;
    }
    temp_r10 = arg0 + 0x2A8;
    temp_f12 = -lbl_803DE500;
    if (!(var_f1 >= temp_f12)) {
        do {
            var_f1 += lbl_803DE504;
        } while (var_f1 < -lbl_803DE500);
    }
    if (!(var_f1 <= lbl_803DE500)) {
        do {
            var_f1 -= lbl_803DE504;
        } while (var_f1 > lbl_803DE500);
    }
    if (M2C_FIELD(temp_r10, f32 *, 4) != var_f1) {
        temp_r11 = arg0 + 0x2C0;
        M2C_FIELD(temp_r11, f32 *, 4) = farg2;
        var_r0 = 0;
        if ((M2C_FIELD(arg0, f32 *, 0x2C0) != lbl_803531E0) || (farg2 != lbl_803531E0) || (M2C_FIELD(temp_r11, f32 *, 8) != lbl_803531E0)) {
            var_r0 = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x220) = var_r0;
        if (farg1 == lbl_803531E0) {
            Simple__SetYRot(arg0, var_f1);
            return;
        }
        var_f12 = var_f1 - M2C_FIELD(temp_r10, f32 *, 4);
        if ((var_f12 > lbl_803531D8) || !(var_f12 >= lbl_803531DC)) {
            var_f12 = lbl_803531E0;
        }
        temp_f10 = -lbl_803DE500;
        if (!(var_f12 >= temp_f10)) {
            do {
                var_f12 += lbl_803DE504;
            } while (var_f12 < temp_f10);
        }
        if (!(var_f12 <= lbl_803DE500)) {
            do {
                var_f12 -= lbl_803DE504;
            } while (var_f12 > lbl_803DE500);
        }
        var_f13 = var_f12;
        if (!(var_f13 >= ((lbl_803DE520 + lbl_803DE520) - lbl_803DE500))) {
            var_f13 += lbl_803DE504;
        }
        M2C_FIELD((arg0 + 0x74), f32 *, 4) = (f32) (var_f13 / farg1);
        M2C_FIELD((arg0 + 0x2B4), f32 *, 4) = var_f1;
        M2C_FIELD(arg0, s32 *, 0x218) = (M2C_FIELD((arg0 + 0x74), f32 *, 4) != lbl_803531E0);
    }
}
