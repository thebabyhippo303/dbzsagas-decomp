/* Quaternion__SlerpRaw @ 0x801ACFFC (size: 0x278, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 asinf(f32);
float sinf(float);
extern f32 lbl_80341424 __attribute__((section(".data")));
extern f32 lbl_80341428;
extern f32 lbl_8034142C __attribute__((section(".data")));
extern f32 lbl_80341430 __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void Quaternion__SlerpRaw(s32 arg0, void *arg1, void *arg2, f32 farg0) {
    volatile mt_vec3_f32 sp8;
    volatile mt_vec3_f32 sp18;
    volatile mt_vec3_f32 sp28;
    volatile mt_vec3_f32 sp38;
    f32 var_f29;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f10_2;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f13_2;
    f64 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f29;
    f32 temp_f29_2;
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 var_f1;
    f32 temp_f9_3;
    f32 var_f1_2;
    f32 temp_f0;

    temp_f9 = M2C_FIELD(arg0, f32 *, 4);
    temp_f13 = M2C_FIELD(arg0, f32 *, 0);
    temp_f0 = M2C_FIELD(arg0, f32 *, 8);
    temp_f13_2 = temp_f13 * temp_f13;
    sp8.v1 = temp_f9 * temp_f9;
    sp8.v0 = temp_f13_2;
    sp8.v2 = temp_f0 * temp_f0;
    temp_f29 = lbl_80341424;
    var_f1 = (M2C_FIELD(arg0, f32 *, 0xC) * M2C_FIELD(arg1, f32 *, 0xC)) + (temp_f13_2 + sp8.v1 + sp8.v2);
    if (!((var_f1 + temp_f29) <= lbl_80341428)) {
        if ((temp_f29 - var_f1) <= lbl_80341428) {
            var_f29 = temp_f29 - farg0;
            var_f1_2 = farg0;
        } else {
            if (!(var_f1 >= lbl_8034142C)) {
                var_f1 = lbl_8034142C;
            }
            if (!(var_f1 <= temp_f29)) {
                var_f1 = temp_f29;
            }
            temp_f1 = asinf(var_f1);
            temp_f30 = sinf(temp_f1);
            var_f29 = sinf(temp_f1 * (temp_f29 - farg0)) / temp_f30;
            var_f1_2 = sinf(farg0 * temp_f1) / temp_f30;
        }
        temp_f13_2 = M2C_FIELD(arg0, f32 *, 0) * var_f29;
        temp_f13_3 = M2C_FIELD(arg0, f32 *, 4) * var_f29;
        temp_f12 = M2C_FIELD(arg0, f32 *, 8) * var_f29;
        temp_f10 = M2C_FIELD(arg1, f32 *, 4) * var_f1_2;
        sp18.v0 = temp_f13_2;
        temp_f9_2 = M2C_FIELD(arg1, f32 *, 8) * var_f1_2;
        sp18.v1 = temp_f13_3;
        temp_f11 = M2C_FIELD(arg1, f32 *, 0) * var_f1_2;
        sp18.v2 = temp_f12;
        sp8.v1 = temp_f13_3 + temp_f10;
        sp8.v0 = temp_f13_2 + temp_f11;
        sp8.v2 = temp_f12 + temp_f9_2;
        M2C_FIELD(arg2, f32 *, 8) = (f32) sp8.v2;
        M2C_FIELD(arg2, f32 *, 4) = (f32) sp8.v1;
        sp28.v0 = temp_f11;
        M2C_FIELD(arg2, f32 *, 0) = sp8.v0;
        sp28.v1 = temp_f10;
        sp28.v2 = temp_f9_2;
        M2C_FIELD(arg2, f32 *, 0xC) = (f32) ((var_f29 * M2C_FIELD(arg0, f32 *, 0xC)) + (var_f1_2 * M2C_FIELD(arg1, f32 *, 0xC)));
        return;
    }
    M2C_FIELD(arg2, f32 *, 0) = (f32) -temp_f9;
    temp_f31 = lbl_80341430;
    M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg2, f32 *, 8) = (f32) -M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg2, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 8);
    temp_f29_2 = sinf((temp_f29 - farg0) * temp_f31);
    temp_f1_2 = sinf(farg0 * temp_f31);
    temp_f31 = M2C_FIELD(arg0, f32 *, 8) * temp_f29_2;
    temp_f0_3 = M2C_FIELD(arg0, f32 *, 0) * temp_f29_2;
    temp_f13_4 = M2C_FIELD(arg0, f32 *, 4) * temp_f29_2;
    temp_f10_2 = M2C_FIELD(arg2, f32 *, 4) * temp_f1_2;
    temp_f11_2 = M2C_FIELD(arg2, f32 *, 8) * temp_f1_2;
    sp18.v0 = temp_f0_3;
    sp18.v1 = temp_f13_4;
    temp_f9_3 = M2C_FIELD(arg2, f32 *, 0) * temp_f1_2;
    sp18.v2 = temp_f31;
    sp8.v0 = temp_f0_3 + temp_f9_3;
    sp8.v1 = temp_f13_4 + temp_f10_2;
    sp8.v2 = temp_f31 + temp_f11_2;
    sp38.v0 = temp_f9_3;
    sp38.v1 = temp_f10_2;
    sp38.v2 = temp_f11_2;
    *(mt_vec3_f32 *)((char *)arg2 + 0) = sp8;
}
