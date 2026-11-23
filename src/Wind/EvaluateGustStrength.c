/* Wind__EvaluateGustStrength @ 0x80218988 (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

float sinf(float);
extern f32 lbl_803465B4 __attribute__((section(".data")));
extern f32 lbl_803465B8 __attribute__((section(".data")));
extern f32 lbl_803465BC __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void Wind__EvaluateGustStrength(void *arg0) {
    mt_vec3_f32 sp8;
    mt_vec3_f32 sp18;
    f32 temp_f0;
    f32 temp_f31;
    f32 fz;
    f32 fy;
    f32 fx;
    f32 x;
    f32 y;
    f32 z;
    f32 var_f13;
    f32 *base;

    var_f13 = lbl_803465B4;
    if (M2C_FIELD(arg0, u8 *, 0x44) & 1) {
        if (M2C_FIELD(arg0, f32 *, 0x24) == lbl_803465B8) {
            var_f13 = (M2C_FIELD(arg0, f32 *, 0x34) * sinf(M2C_FIELD(arg0, f32 *, 0x28))) + M2C_FIELD(arg0, f32 *, 0x30);
        } else {
            temp_f31 = sinf(M2C_FIELD(arg0, f32 *, 0x28));
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x24);
            var_f13 = (M2C_FIELD(arg0, f32 *, 0x34) * ((temp_f31 + sinf(temp_f0 * (M2C_FIELD(arg0, f32 *, 0x28) - temp_f0))) * lbl_803465BC)) + M2C_FIELD(arg0, f32 *, 0x30);
        }
    }
    base = (f32 *)((char *)arg0 + 0x18);
    fy = base[1];
    fz = base[2];
    var_f13 = var_f13 * M2C_FIELD(arg0, f32 *, 0x38);
    fx = base[0];
    z = fz * var_f13;
    y = fy * var_f13;
    sp8.v2 = z;
    x = fx * var_f13;
    sp8.v1 = y;
    sp8.v0 = x;
    sp18.v0 = fx;
    sp18.v1 = fy;
    sp18.v2 = fz;
    *(mt_vec3_f32 *)arg0 = sp8;
}
