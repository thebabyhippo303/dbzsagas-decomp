/* MenuPanel__SetTitleDropShadow @ 0x802676B0 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8;

void Sphere__SetDropShadow(void *, int, s8, s8, s8);
void MenuPanel__SetTitleDropShadow(void *arg0, int arg1, s8 arg2, s8 arg3, s8 arg4) {
    Sphere__SetDropShadow((char *)arg0 + 11652, arg1, arg2, arg3, arg4);
}
