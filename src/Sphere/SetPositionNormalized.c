/* Sphere__SetPositionNormalized @ 0x8026C528 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 UI__GetScreenHeight(void);
f32 UI__GetScreenWidth(void);
void Sphere__SetPositionNormalized(void *arg0, f32 farg0, f32 farg1) {
    f32 temp_f31;
    void *temp_r29;
    void *temp_r30;
    void *temp_r30_2;

    temp_r30 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r30_2 = temp_r30 + 0xA8;
    temp_r29 = arg0 + M2C_FIELD(temp_r30, s16 *, 0xA8);
    temp_f31 = farg0 * UI__GetScreenWidth();
    M2C_FIELD(temp_r30_2, M2C_UNK (**)(void *, f32, f32), 4)(temp_r29, temp_f31, farg1 * UI__GetScreenHeight());
}
