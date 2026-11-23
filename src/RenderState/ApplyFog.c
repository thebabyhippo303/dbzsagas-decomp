/* RenderState__ApplyFog @ 0x8024B2C8 (size: 0x13C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define NULL 0
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef unsigned long long u64; typedef long long s64;
typedef float f32; typedef double f64; typedef int bool;
#define true 1
#define false 0
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern void *memcpy(void *, const void *, unsigned int);

extern f32 Gfx__BitsToFloat(u32);
extern u32 GXSetFog(u32, u32, f64, f64, f64, f64);
extern u32 RenderState__Get(u32);
extern void Gfx__UnpackColor(u32, u32);
extern f32 lbl_80347954 __attribute__((section(".data")));
extern u8 lbl_80374568[];
extern f32 lbl_80374294[] __attribute__((section(".data")));
extern f32 lbl_80347958 __attribute__((section(".data")));
u32 RenderState__ApplyFog(void) {
    f32 f1_1;
    f32 f1_2;
    f32 f28_1;
    f32 f29_1;
    f32 f30_1;
    f32 f31_1;
    u8 *r11_1;
    u32 r3_2;
    u32 r3_4;
    u32 r3_6;
    u32 r3_8;
    u32 r3_10;
    u32 r3_12;
    u32 r3_15;
    u8 *r30_2;
    u32 r31_1;
    u32 r9_6;
    u8 stack[16];
    f30_1 = lbl_80347954;
    r3_2 = RenderState__Get(9);
    f28_1 = f30_1;
    f31_1 = f30_1;
    f29_1 = f31_1;
    if (!((r3_2) == (1))) goto label_8024B37C;
    r3_4 = RenderState__Get(10);
    if (((r3_4) > ((u32)(0x0003u)))) goto label_8024B37C;
    r31_1 = (*(u32 *)(unsigned long)((((u32) &lbl_80374568) + (r3_4 << 2))));
    r3_6 = RenderState__Get(12);
    f1_1 = Gfx__BitsToFloat(r3_6);
    f28_1 = f1_1;
    r3_8 = RenderState__Get(13);
    f1_2 = Gfx__BitsToFloat(r3_8);
    f30_1 = f1_2;
    f29_1 = lbl_80374294[4];
    r3_10 = RenderState__Get(16);
    if (!((r3_10) == (1))) goto label_8024B374;
    f31_1 = lbl_80347958;
    goto label_8024B380;
label_8024B374:;
    f31_1 = lbl_80374294[5];
    goto label_8024B380;
label_8024B37C:;
    r31_1 = 0;
label_8024B380:;
    r30_2 = (u8 *)((u32)(stack + 4));
    r3_12 = RenderState__Get(11);
    Gfx__UnpackColor(((u32)r30_2), r3_12);
    r11_1 = (u8 *)((u32)(stack + 8));
    M2C_FIELD(stack, u8 *, 8) = (u8)((u8)(M2C_FIELD(stack, u8 *, 4)));
    M2C_FIELD(r11_1, u8 *, 1) = (u8)((u8)(M2C_FIELD(r30_2, u8 *, 1)));
    M2C_FIELD(r11_1, u8 *, 2) = (u8)((u8)(M2C_FIELD(r30_2, u8 *, 2)));
    M2C_FIELD(r11_1, u8 *, 3) = (u8)((u8)255);
    M2C_FIELD(stack, u32 *, 0) = (M2C_FIELD(stack, u32 *, 8));
    r3_15 = GXSetFog(r31_1, ((u32)stack), (f64)f28_1, (f64)f30_1, (f64)f29_1, (f64)f31_1);
    return r3_15;
}
