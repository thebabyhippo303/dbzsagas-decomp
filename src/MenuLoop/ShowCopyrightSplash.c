/* MenuLoop__ShowCopyrightSplash @ 0x8004CADC (size: 0x15C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__SetPosition(void *, f32, f32);
void Sphere__SetWidth(void *, f32);
void Sphere__SetHeight(void *, f32);
void Sphere__SetColor(void *, f32, f64, f64, f64);
void Sphere__Render(void *);
void Sphere__Hide(void *);
void SphereText__SetText(s32, char *);
void Sphere__SetTexture(void *, s32, s32, s32, s32, s32);
void Sphere__SetCornerColorRGBA8(void *, s32, s32, s32, s32, s32);
f32 UI__GetScreenHeight(void);
f32 UI__GetScreenWidth(void);
extern f32 lbl_80319980 __attribute__((section(".data")));
extern f32 lbl_80319984 __attribute__((section(".data")));
extern f32 lbl_80319988 __attribute__((section(".data")));
extern char lbl_80319778[] __attribute__((section(".data")));

/* 98.9% (1 byte): only site2 fmr f4 sources f2 not f3. f64-chain forces
 * fmr chains; brute_force (12 variants) found nothing. Next: flip site2
 * 4th-arg VN pick (f3 over f2). */
void MenuLoop__ShowCopyrightSplash(void *arg0) {
    void *t28;
    void *t30;

    t30 = (char *)arg0 + 0x210;
    M2C_FIELD(arg0, s32 *, 0xBD0) = 1;
    Sphere__SetTexture(t30, M2C_FIELD(arg0, s32 *, 0x10), 0x12345678, 0, 1, 1);
    Sphere__SetCornerColorRGBA8(t30, 0, 0, 0, 0, 0xFF);
    t28 = (char *)arg0 + 0x1C;
    Sphere__SetCornerColorRGBA8(t30, 1, 0, 0, 0, 0xFF);
    Sphere__SetCornerColorRGBA8(t30, 2, 0, 0, 0, 0xFF);
    Sphere__SetCornerColorRGBA8(t30, 3, 0, 0, 0, 0xFF);
    Sphere__SetPosition(t30, lbl_80319980, lbl_80319980);
    Sphere__SetWidth(t30, UI__GetScreenWidth());
    Sphere__SetHeight(t30, UI__GetScreenHeight());
    {
        f32 fa = lbl_80319984;
        f64 fb = fa;
        f64 fc = fb;
        Sphere__SetColor(t30, fa, fb, fc, lbl_80319980);
    }
    Sphere__Render(t30);
    Sphere__Hide(t30);
    {
        f32 fa = lbl_80319984;
        f64 fb = fa;
        f64 fc = fb;
        Sphere__SetColor(t28, fa, fb, fc, fc);
    }
    SphereText__SetText((s32)t28, lbl_80319778);
    Sphere__Render(t28);
    M2C_FIELD(arg0, f32 *, 0xBD4) = lbl_80319988;
}
