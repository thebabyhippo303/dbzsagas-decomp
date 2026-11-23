/* View__Apply @ 0x802464AC (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void View__UpdateFrustum(void *);
void MatrixStack__SetMode(s32);
void * View__ApplyProjection(void *);
void RenderState__Unlock(s32);
void RenderState__Change(s32, s32);
s32 Gfx__FloatToBits(f32);
s32 Gfx__PackColor(void *);
void RenderState__Lock(s32);
M2C_UNK MatrixStack__Load(s32);
void View__SetViewport(void *);
void View__Apply(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x268) = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x88) != 0) {
        View__UpdateFrustum(arg0);
        M2C_FIELD(arg0, s32 *, 0x26C) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x270) = (s32) M2C_FIELD(arg0, s32 *, 0x24C);
        M2C_FIELD(arg0, s32 *, 0x274) = (s32) M2C_FIELD(arg0, s32 *, 0x250);
    }
    MatrixStack__SetMode(0);
    MatrixStack__Load(View__ApplyProjection(arg0));
    RenderState__Unlock(9);
    RenderState__Change(9, M2C_FIELD(arg0, s32 *, 0x18));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        RenderState__Change(0xC, Gfx__FloatToBits(M2C_FIELD(arg0, f32 *, 0x10)));
        RenderState__Change(0xD, Gfx__FloatToBits(M2C_FIELD(arg0, f32 *, 0x14)));
        RenderState__Change(0xB, Gfx__PackColor(arg0 + 0x1C));
        RenderState__Change(0xA, M2C_FIELD(arg0, s32 *, 0x20));
        RenderState__Change(0xE, Gfx__FloatToBits(M2C_FIELD(arg0, f32 *, 0x24)));
    } else {
        RenderState__Lock(9);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x7C) != 0) {
        View__SetViewport(arg0 + 0x6C);
    }
    M2C_FIELD(arg0, s32 *, 0x268) = 0;
}
