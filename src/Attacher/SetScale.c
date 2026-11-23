/* Attacher__SetScale @ 0x802171A0 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef double f64;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern s32 lbl_803ACFA8 __attribute__((section(".data")));
void Attacher__SetScale(u32 arg0, f32 farg0) {
s32 off = (arg0 >> 0x10U) * 0x5C;
void *base = lbl_803ACFA8 + off;
char *p;
if (M2C_FIELD(base, u32 *, 0) != arg0) {
return;
}
p = (char *)base + 0x34;
M2C_FIELD(base, f32 *, 0x34) = farg0;
M2C_FIELD(p, f32 *, 4) = farg0;
M2C_FIELD(p, f32 *, 8) = farg0;
}