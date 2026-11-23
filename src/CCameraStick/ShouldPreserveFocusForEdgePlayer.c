/* CCameraStick__ShouldPreserveFocusForEdgePlayer @ 0x800CD8CC (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

float sqrtf(float);
extern f32 lbl_80321C64 __attribute__((section(".data")));
extern f32 lbl_80321C68;
extern f32 lbl_80321C6C __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
s32 CCameraStick__ShouldPreserveFocusForEdgePlayer(void *arg1, void *arg2, void *arg3) {
    volatile mt_vec3_f32 sp8;
    volatile mt_vec3_f32 sp18;
    volatile mt_vec3_f32 sp28;
    volatile mt_vec3_f32 sp38;
    f64 temp_f0;
    f32 temp_f0_2;
    f64 temp_f13;
    f32 temp_f11;
    f32 temp_f1;
    f32 temp_f13_3;
    f32 temp_f13_2;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f31;
    register void *temp_r11;

    temp_r11 = M2C_FIELD(arg1, void **, 0x84);
    sp18.v0 = lbl_80321C68;
    temp_f13 = (M2C_FIELD(temp_r11, f32 *, 0x70) - M2C_FIELD(temp_r11, f32 *, 0x64)) * lbl_80321C64;
    sp18.v2 = (f32) lbl_80321C68;
    sp18.v1 = temp_f13;
    temp_f11 = M2C_FIELD(arg1, f32 *, 0x38) + sp18.v0;
    sp8.v1 = M2C_FIELD(arg1, f32 *, 0x3c) + temp_f13;
    sp8.v0 = temp_f11;
    sp8.v2 = M2C_FIELD(arg1, f32 *, 0x40);
    temp_f1_2 = M2C_FIELD(arg3, f32 *, 0) - temp_f11;
    temp_f13_2 = M2C_FIELD(arg3, f32 *, 8) - sp8.v2;
    sp18.v0 = temp_f1_2;
    temp_f0 = M2C_FIELD(arg3, f32 *, 4) - sp8.v1;
    sp18.v2 = temp_f13_2;
    sp18.v1 = temp_f0;
    temp_f1_3 = temp_f1_2 * temp_f1_2;
    sp28.v0 = temp_f1_3;
    sp28.v1 = temp_f0 * temp_f0;
    sp28.v2 = temp_f13_2 * temp_f13_2;
    temp_f31 = sqrtf(temp_f1_3 + sp28.v1 + sp28.v2);
    temp_f13_3 = M2C_FIELD(arg2, f32 *, 8) - sp8.v2;
    temp_f0_2 = M2C_FIELD(arg2, f32 *, 4) - sp8.v1;
    sp38.v2 = temp_f13_3 * temp_f13_3;
    temp_f1_4 = M2C_FIELD(arg2, f32 *, 0) - sp8.v0;
    sp28.v1 = temp_f0_2;
    sp28.v0 = temp_f1_4;
    sp28.v2 = temp_f13_3;
    temp_f1 = temp_f1_4 * temp_f1_4;
    sp38.v0 = temp_f1;
    sp38.v1 = temp_f0_2 * temp_f0_2;
    return temp_f31 > (lbl_80321C6C + sqrtf(temp_f1 + sp38.v1 + sp38.v2));
}
