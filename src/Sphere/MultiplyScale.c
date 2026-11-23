/* Sphere__MultiplyScale @ 0x8026C74C (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__MultiplyScale(void *arg0, f32 arg1, f32 arg2) {
char *vt;
vt = *(char **)((char *)arg0 + 412);
((void (*)(void *, f32, f32))*(void **)(vt + 204))((char *)arg0 + *(s16 *)(vt + 200), *(f32 *)((char *)arg0 + 52) * arg1, *(f32 *)((char *)arg0 + 56) * arg2);
}
