/* ButtonPromptBar__SetAllTextMetrics @ 0x80262198 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SphereText__SetSize(void *, f32);
void SphereText__SetSpacing(void *, f32);
void SphereText__SetAlignment(void *, f32);

void ButtonPromptBar__SetAllTextMetrics(void *arg0, f32 arg1, f32 arg2, f32 arg3) {
    u32 i = 0;
    char *p = (char *)arg0 + 1264;
    do {
        SphereText__SetSize(p, arg1);
        i += 1;
        SphereText__SetSpacing(p, arg2);
        SphereText__SetAlignment(p, arg3);
        p += 1360;
    } while (i <= 11);
}
