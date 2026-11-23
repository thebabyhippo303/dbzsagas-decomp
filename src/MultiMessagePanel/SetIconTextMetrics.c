/* MultiMessagePanel__SetIconTextMetrics @ 0x8026A670 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SphereText__SetSize(void *, f32);
void SphereText__SetSpacing(void *, f32);
void MultiMessagePanel__SetIconTextMetrics(s32 arg0, f32 farg0, f32 farg1) {
    s32 var_r30;
    void *var_r31;

    var_r31 = arg0 + 0x705C;
    var_r30 = 4;
    do {
        SphereText__SetSize(var_r31, farg0);
        SphereText__SetSpacing(var_r31, farg1);
        var_r31 += 0x550;
        var_r30 -= 1;
    } while (var_r30 != 0);
}
