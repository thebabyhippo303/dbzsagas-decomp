/* Floater__IsMovingOnPath @ 0x802B4D10 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern f32 lbl_80351FB0 __attribute__((section(".data")));
s32 Floater__IsMovingOnPath(void *arg0) {
char *p;
if (*(void **)((char *)arg0 + 1228) == NULL) {
return 0;
}
p = (char *)arg0 + 1044;
if (*(f32 *)(p + 48) == lbl_80351FB0) {
return 0;
}
return *(s32 *)(p + 144) == 0;
}
