/* ButtonPromptBar__SetAllTextColors @ 0x80262284 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32;
typedef float f32;
void Sphere__SetColor(void *, f32, f32, f32, f32);
void ButtonPromptBar__SetAllTextColors(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    u32 i = 0;
    char *p = (char *)arg0 + 1264;
    do {
        Sphere__SetColor(p, arg1, arg2, arg3, arg4);
        i += 1;
        p += 1360;
    } while (i <= 11);
}
