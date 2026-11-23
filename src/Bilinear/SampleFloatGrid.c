/* Bilinear__SampleFloatGrid @ 0x80006300 (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

static const char pool_pad[0x7528] = {1};

f32 Bilinear__SampleFloatGrid(void *arg0, s32 arg7, f32 farg0, f32 farg1) {
    f32 temp_f0;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f13;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f9;
    f32 s_d;
    f32 s_c;
    f32 s_b;
    f32 s_a;
    s32 temp_r10;
    s32 temp_r11;
    s32 temp_r11_2;
    s32 temp_r28;
    s32 temp_r30;
    s32 temp_r7;
    s32 temp_r8;

    temp_r28 = M2C_FIELD(arg0, s32 *, 0);
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_f13 = (f32) M2C_FIELD(arg0, s32 *, 4);
    temp_f11_2 = farg0 * temp_f13;
    temp_f2_2 = farg1 * temp_f13;
    temp_r8 = (s32) temp_f11_2;
    temp_r7 = temp_r8 + 1;
    temp_r11_2 = (s32) temp_f2_2;
    temp_r10 = temp_r11_2 * temp_r28;
    temp_r11 = (temp_r11_2 + 1) * temp_r28;
    temp_f11 = temp_f11_2 - (f32) temp_r8;
    temp_f2 = temp_f2_2 - (f32) temp_r11_2;
    s_d = *(f32 *) (((temp_r7 + temp_r10) * 4) + temp_r30);
    s_c = *(f32 *) (((temp_r8 + temp_r10) * 4) + temp_r30);
    s_b = *(f32 *) (((temp_r7 + temp_r11) * 4) + temp_r30);
    s_a = *(f32 *) (((temp_r8 + temp_r11) * 4) + temp_r30);
    temp_f0 = 1.0f - temp_f2;
    temp_f9 = 1.0f - temp_f11;
    return (s_a * (temp_f9 * temp_f2)) + ((s_b * (temp_f11 * temp_f2)) + ((s_c * (temp_f9 * temp_f0)) + (s_d * (temp_f11 * temp_f0))));
}
