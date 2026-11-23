/* MenuLoop__ResetSplashDisplay @ 0x8004C9AC (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void *dblLoad(const char *, void *, int);
void Sphere__SetTexture(void *, s32, s32, s32, s32, s32);
void Sphere__SetPosition(void *, f32, f32);
f32 UI__GetScreenWidth(void);
void Sphere__SetWidth(void *, f32);
f32 UI__GetScreenHeight(void);
void Sphere__SetHeight(void *, f32);
void Sphere__Hide(void *);
extern s8 lbl_80319754 __attribute__((section(".data")));
extern f32 lbl_80319768 __attribute__((section(".data")));
extern f32 lbl_8031976C __attribute__((section(".data")));
extern s32 lbl_803DC3C0;

void MenuLoop__ResetSplashDisplay(void *arg0) {
    void *sprite;
    void *tex;
    if (lbl_803DC3C0 == 0) {
        tex = dblLoad(&lbl_80319754, NULL, 0);
    }
    sprite = (char *)arg0 + 0x210;
    *(s32 *)((char *)arg0 + 0xBD0) = 0;
    Sphere__SetTexture(sprite, (s32)tex, 0, 0, 1, 1);
    Sphere__SetPosition(sprite, lbl_80319768, lbl_80319768);
    Sphere__SetWidth(sprite, UI__GetScreenWidth());
    Sphere__SetHeight(sprite, UI__GetScreenHeight());
    Sphere__Hide(sprite);
    *(f32 *)((char *)arg0 + 0xBD4) = lbl_8031976C;
}
