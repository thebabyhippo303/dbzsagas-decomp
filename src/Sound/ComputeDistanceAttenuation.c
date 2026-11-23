/* Sound__ComputeDistanceAttenuation @ 0x8019FF04 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern f32 lbl_803407D4 __attribute__((section(".data")));
extern f32 lbl_803407D8 __attribute__((section(".data")));
f32 Sound__ComputeDistanceAttenuation(f32 a1, f32 a2, f32 a3) {
f32 t;
if (a1 > a2) {
goto compute;
}
return lbl_803407D4;
compute:
t = lbl_803407D4 - (a1 - a2) / (a3 - a2);
if (t < lbl_803407D8) {
return lbl_803407D8;
}
if (t <= lbl_803407D4) {
return t;
} else {
return lbl_803407D4;
}
}
