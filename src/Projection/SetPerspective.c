/* Projection__SetPerspective @ 0x8028EF64 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK Projection__BuildPerspective(s32, f32, f32, f32, f32);
extern f32 lbl_8034F650 __attribute__((section(".data")));
extern u8 lbl_803BEC64[];
extern f32 lbl_803DD94C;
extern f32 lbl_803DD950;
extern f32 lbl_803DD954;
extern f32 lbl_803DD958;

s32 Projection__SetPerspective(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    lbl_803DD950 = farg2;
    lbl_803DD954 = farg3;
    lbl_803DD958 = lbl_8034F650 / (farg3 - farg2);
    lbl_803DD94C = farg1;
    Projection__BuildPerspective((s32)lbl_803BEC64, farg0, farg1, farg2, farg3);
    return 1;
}
