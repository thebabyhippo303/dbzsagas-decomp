/* Avatar__TransformPointToLocal @ 0x80091D10 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void Avatar__TransformPointToLocal(void *arg0, void *arg1, void *arg2) {
    volatile mt_vec3_f32 sp8;
    char *p_44;
    f32 temp_f11;
    register f32 temp_f13;
    void *temp_r11;
    f32 temp_f0;

    temp_r11 = 0x38 + arg1;
    sp8.v2 = M2C_FIELD(arg2, f32 *, 8) - M2C_FIELD(temp_r11, f32 *, 8);
    temp_f11 = M2C_FIELD(arg2, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0x38);
    sp8.v1 = M2C_FIELD(arg2, f32 *, 4) - M2C_FIELD(temp_r11, f32 *, 4);
    sp8.v0 = temp_f11;
    temp_f0 = sp8.v1;
    temp_f13 = sp8.v2;
    p_44 = (char *)arg1 + 0x44;
    M2C_FIELD(arg0, f32 *, 0) = (f32) ((temp_f13 * M2C_FIELD(p_44, f32 *, 0x8)) + ((temp_f11 * M2C_FIELD(p_44, f32 *, 0x0)) + (temp_f0 * M2C_FIELD(p_44, f32 *, 0x4))));
    M2C_FIELD(arg0, f32 *, 8) = (f32) ((temp_f13 * M2C_FIELD(p_44, f32 *, 0x20)) + ((temp_f11 * M2C_FIELD(p_44, f32 *, 0x18)) + (M2C_FIELD(p_44, f32 *, 0x1c) * temp_f0)));
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((M2C_FIELD(p_44, f32 *, 0x14) * temp_f13) + ((M2C_FIELD(p_44, f32 *, 0xc) * temp_f11) + (M2C_FIELD(p_44, f32 *, 0x10) * temp_f0)));
}
