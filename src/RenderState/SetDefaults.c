/* RenderState__SetDefaults @ 0x80241454 (size: 0x1EC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void RenderState__Change(s32, s32);
s32 Gfx__FloatToBits(f32);
void TextureStageState__ResetAll(void);
void VertexStream__Disable(s32);
void VertexStream__SetTexCoordStage(s32);
extern f32 lbl_80347564 __attribute__((section(".data")));
extern f32 lbl_80347568 __attribute__((section(".data")));
extern u8 lbl_803AD9E4[];

void RenderState__SetDefaults(void) {
    u8 *data;
    RenderState__Change(22, -1);
    RenderState__Change(2, 1);
    RenderState__Change(3, 1);
    RenderState__Change(9, 1);
    RenderState__Change(15, 0);
    RenderState__Change(16, 1);
    RenderState__Change(25, Gfx__FloatToBits(lbl_80347564));
    RenderState__Change(26, Gfx__FloatToBits(lbl_80347564));
    RenderState__Change(30, Gfx__FloatToBits(lbl_80347564));
    RenderState__Change(23, 0);
    RenderState__Change(6, 1);
    RenderState__Change(7, Gfx__FloatToBits(lbl_80347568));
    RenderState__Change(8, Gfx__FloatToBits(lbl_80347564));
    RenderState__Change(0, 2);
    RenderState__Change(1, 1);
    RenderState__Change(4, 5);
    RenderState__Change(5, 1);
    RenderState__Change(27, 0);
    RenderState__Change(28, 0);
    data = lbl_803AD9E4;
    if (M2C_FIELD(data, s32 *, 0x3C) != 0) {
        RenderState__Change(18, 6);
        RenderState__Change(19, M2C_FIELD(data, u8 *, 0x40));
        RenderState__Change(17, 1);
    } else {
        RenderState__Change(18, 6);
        RenderState__Change(19, 0);
        RenderState__Change(17, 1);
    }
    RenderState__Change(20, Gfx__FloatToBits(lbl_80347564));
    TextureStageState__ResetAll();
    VertexStream__Disable(0);
    VertexStream__Disable(2);
    VertexStream__Disable(1);
    VertexStream__SetTexCoordStage(1);
    VertexStream__Disable(3);
    VertexStream__SetTexCoordStage(0);
    VertexStream__Disable(3);
}
