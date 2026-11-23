/* Gfx__PackColorFromFloats @ 0x8024166C (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


f32 RenderState__ClampFloat(f32, f32, f32);
extern f32 lbl_8034756C __attribute__((section(".data")));
extern f32 lbl_80347570 __attribute__((section(".data")));

s32 Gfx__PackColorFromFloats(void *arg0) {
    f32 temp_f31;
    u8 temp_r28;
    u8 temp_r29;
    u8 temp_r30;

    temp_f31 = lbl_8034756C;
    temp_r28 = (u8) (s32) RenderState__ClampFloat(M2C_FIELD(arg0, f32 *, 0) * temp_f31, lbl_80347570, temp_f31);
    temp_r29 = (u8) (s32) RenderState__ClampFloat(M2C_FIELD(arg0, f32 *, 4) * temp_f31, lbl_80347570, temp_f31);
    temp_r30 = (u8) (s32) RenderState__ClampFloat(M2C_FIELD(arg0, f32 *, 8) * temp_f31, lbl_80347570, temp_f31);
    return ((s32) RenderState__ClampFloat(M2C_FIELD(arg0, f32 *, 0xC) * temp_f31, lbl_80347570, temp_f31) << 0x18) | (temp_r30 << 0x10) | (temp_r29 << 8) | temp_r28;
}
