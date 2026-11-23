/* Distort__RenderInstance @ 0x802A3370 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s16 TextureMgr__CaptureScreenTexture(s32, s32, f32);
M2C_UNK RenderState__Unlock(s32);
s32 RenderState__Get(s32);
void RenderState__Change(s32, s32);
s32 TextureMgr__GetWhiteTexture(void);
M2C_UNK Gfx__FloatToBits(f32);
void Distort__DrawMesh(void *, s32, s32);
extern s32 lbl_803AD9F4 __attribute__((section(".bss")));
extern f32 lbl_80350D84 __attribute__((section(".rodata")));

void Distort__RenderInstance(void *arg0, s32 arg1, s32 arg2) {
    s16 tex;
    s32 old;

    if (lbl_803AD9F4 == 0) {
        tex = TextureMgr__CaptureScreenTexture(0, 0, lbl_80350D84);
        RenderState__Unlock(6);
        old = RenderState__Get(6);
        RenderState__Change(6, 0);
        RenderState__Change(5, 1);
        RenderState__Change(17, 0);
    } else {
        tex = TextureMgr__GetWhiteTexture();
    }
    RenderState__Change(30, Gfx__FloatToBits(lbl_80350D84));
    Distort__DrawMesh(arg0, tex, arg2);
    RenderState__Change(6, old);
    RenderState__Change(5, 1);
    RenderState__Change(17, 1);
    RenderState__Change(3, 1);
}
