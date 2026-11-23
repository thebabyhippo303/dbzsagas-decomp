/* RenderState__SetFogRange @ 0x8024AC78 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void MatrixStack__SetMode(s32);
void MatrixStack__LoadIdentity(void);
void MatrixStack__Perspective(f32, f32, f32, f32);
void RenderState__Set(s32, void *);
void RenderState__ApplyFog(void);
extern f32 lbl_80347948 __attribute__((section(".data")));
extern void *lbl_803AD7EC __attribute__((section(".data")));
typedef struct { s32 u0; f32 u4; f32 u8; f32 u12; } FogP;
void RenderState__SetFogRange(void *arg0) {
    f32 f31v;
    void *t30;
    FogP *fp;
    void *r31v;
    t30 = lbl_803AD7EC;
    if (t30 != NULL) {
        if (arg0 != NULL) {
            fp = (FogP *)((char *)t30 + 0xC);
            f31v = fp->u4;
            r31v = fp;
        } else {
            r31v = (char *)t30 + 0xC;
            f31v = lbl_80347948;
        }
        MatrixStack__SetMode(0);
        MatrixStack__LoadIdentity();
        MatrixStack__Perspective(*(f32 *)((char *)r31v + 8), *(f32 *)((char *)r31v + 12), *(f32 *)((char *)t30 + 12), f31v);
        MatrixStack__SetMode(1);
        RenderState__Set(0x10, arg0);
        RenderState__ApplyFog();
    }
}
