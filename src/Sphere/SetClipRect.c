/* Sphere__SetClipRect @ 0x8026E2C8 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__SetClipRect(void *arg0, f32 a, f32 b, f32 c, f32 d) {
char *vt;
vt = *(char **)((char *)arg0 + 412);
((void (*)(void *, f32, f32, f32, f32, f32, f32, f32, f32))*(void **)(vt + 716))((char *)arg0 + *(s16 *)(vt + 712), a, b, c, b, c, d, a, d);
}
