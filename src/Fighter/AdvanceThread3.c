/* Fighter__AdvanceThread3 @ 0x800F05C4 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AnimScript__RunThread(void *, s32, s32);
extern f32 lbl_80323BB8 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));

void Fighter__AdvanceThread3(s32 arg0) {
    AnimScript__RunThread(arg0 + 0x1C, 3, (s32) (u16) (s32) (lbl_803A35BC * lbl_80323BB8));
}
