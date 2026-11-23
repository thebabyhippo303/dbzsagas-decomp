/* MessagePanel__SetIconTextMetrics @ 0x8026A01C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SphereText__SetSize(void *, f32);
void SphereText__SetSpacing(void *, f32);

void MessagePanel__SetIconTextMetrics(void *arg0, f32 farg0, f32 farg1) {
    void *temp_r30;

    temp_r30 = (char *)arg0 + 0x62B0;
    SphereText__SetSize(temp_r30, farg0);
    SphereText__SetSpacing(temp_r30, farg1);
}
