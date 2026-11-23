/* ProjectedTexture__BeginPass @ 0x802289E4 (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void RenderState__Change(s32, s32);
void VertexStream__Enable(s32);
void VertexStream__Disable(s32);
void VertexStream__SetTexCoordStage(s32);
M2C_UNK Gfx__FloatToBits(f32);
M2C_UNK RenderState__MarkDirty(s32);
M2C_UNK RenderState__Lock(s32);
M2C_UNK TextureStageState__ResetAll(void);
extern f32 lbl_803468AC __attribute__((section(".data")));
extern s32 lbl_803ADA34 __attribute__((section(".data")));

void ProjectedTexture__BeginPass(s32 arg0) {
    RenderState__Change(3, arg0);
    RenderState__Change(0x19, Gfx__FloatToBits(lbl_803468AC));
    RenderState__Change(0x17, 0);
    RenderState__MarkDirty(0x16);
    RenderState__Change(0x16, -1);
    if (lbl_803ADA34 != 0) {
        RenderState__Change(0x16, -0x7F7F01);
    }
    RenderState__Change(5, 1);
    RenderState__Change(6, 0);
    RenderState__Lock(3);
    RenderState__Lock(0x19);
    RenderState__Lock(0x17);
    RenderState__Lock(0x16);
    RenderState__Lock(5);
    RenderState__Lock(6);
    RenderState__Lock(4);
    TextureStageState__ResetAll();
    VertexStream__Enable(0);
    VertexStream__Disable(2);
    VertexStream__Disable(1);
    VertexStream__SetTexCoordStage(1);
    VertexStream__Disable(3);
    VertexStream__SetTexCoordStage(0);
    VertexStream__Enable(3);
}
