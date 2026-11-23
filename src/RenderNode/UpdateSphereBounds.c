/* RenderNode__UpdateSphereBounds @ 0x8029F6A8 (size: 0x134, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void RenderNode__UpdateSphereBounds(void *arg0, void *arg1) {
    mt_vec3_f32 sp8;
    f32 temp_f0;
    f32 temp_f11;
    f32 temp_f13;
    f32 temp_f7;
    f32 temp_f8;
    void *temp_r10;
    void *temp_r11;
    void *temp_r6;
    void *temp_r7;
    void *temp_r9;

    temp_r9 = arg1 + 0x10;
    temp_r11 = arg0 + 4;
    temp_f8 = M2C_FIELD(temp_r11, f32 *, 4);
    temp_r10 = arg1 + 0x50;
    temp_r7 = arg1 + 0x60;
    temp_f7 = M2C_FIELD(arg0, f32 *, 4);
    temp_f0 = M2C_FIELD(temp_r11, f32 *, 8);
    temp_r6 = arg1 + 0x6C;
    sp8.v0 = (temp_f0 * M2C_FIELD(temp_r9, f32 *, 0x20)) + ((temp_f7 * M2C_FIELD(arg1, f32 *, 0x10)) + (temp_f8 * M2C_FIELD(temp_r9, f32 *, 0x10))) + M2C_FIELD(temp_r9, f32 *, 0x30);
    sp8.v1 = (temp_f0 * M2C_FIELD(temp_r9, f32 *, 0x24)) + ((temp_f7 * M2C_FIELD(temp_r9, f32 *, 4)) + (temp_f8 * M2C_FIELD(temp_r9, f32 *, 0x14))) + M2C_FIELD(temp_r9, f32 *, 0x34);
    sp8.v2 = (temp_f0 * M2C_FIELD(temp_r9, f32 *, 0x28)) + ((temp_f7 * M2C_FIELD(temp_r9, f32 *, 8)) + (temp_f8 * M2C_FIELD(temp_r9, f32 *, 0x18))) + M2C_FIELD(temp_r9, f32 *, 0x38);
    *(mt_vec3_f32 *)((char *)arg1 + 0x50) = sp8;
    temp_f13 = M2C_FIELD(arg1, f32 *, 0x5C);
    sp8.v1 = M2C_FIELD(temp_r10, f32 *, 4) - temp_f13;
    sp8.v0 = M2C_FIELD(arg1, f32 *, 0x50) - temp_f13;
    sp8.v2 = M2C_FIELD(temp_r10, f32 *, 8) - temp_f13;
    *(mt_vec3_f32 *)((char *)arg1 + 0x60) = sp8;
    temp_f11 = M2C_FIELD(arg1, f32 *, 0x5C);
    sp8.v0 = M2C_FIELD(arg1, f32 *, 0x50) + temp_f11;
    sp8.v1 = M2C_FIELD(temp_r10, f32 *, 4) + temp_f11;
    sp8.v2 = M2C_FIELD(temp_r10, f32 *, 8) + temp_f11;
    *(mt_vec3_f32 *)((char *)arg1 + 0x6C) = sp8;
}