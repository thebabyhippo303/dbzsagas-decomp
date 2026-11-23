/* MessagePanel__UpdateLayout @ 0x8026A064 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void MenuFrame__UpdateLayout(void *);
f32 fn_80275E04(void *);
f32 fn_80275E74(void *);
f32 SphereText__GetSize(void *);
void SphereText__SetAlignment(void *, f32);
void SphereText__SetMaxSize(void *, f32, f32);
void SphereText__SetWrapWidth(void *, f32);
void Sphere__SetAnchor(void *, f32, f32);
void Sphere__SetPosition(void *, f32, f32);
extern f32 lbl_80349E90 __attribute__((section(".data")));
extern f32 lbl_80349E94 __attribute__((section(".data")));
extern f32 lbl_80349E98 __attribute__((section(".data")));
extern f32 lbl_80349E9C __attribute__((section(".data")));
extern f32 lbl_80349EA0 __attribute__((section(".data")));

void MessagePanel__UpdateLayout(void *arg0) {
    void *r29;
    void *r28;
    void *r26;
    f32 f28;
    f32 f31;
    f32 f27;
    f32 f29;
    f32 f30;
    f32 g94;
    r29 = (char *)arg0 + 420;
    MenuFrame__UpdateLayout(arg0);
    r28 = (char *)arg0 + 23916;
    r26 = (char *)arg0 + 24416;
    f28 = fn_80275E04(r29);
    f31 = fn_80275E74(r29);
    f27 = SphereText__GetSize((char *)arg0 + 11652);
    f30 = (*(f32 *)((char *)arg0 + 48) - (2.0f * f31)) - (f27 * lbl_80349E90);
    f29 = (*(f32 *)((char *)arg0 + 44) - (2.0f * f28));
    Sphere__SetAnchor(r28, lbl_80349E94, lbl_80349E94);
    g94 = lbl_80349E94;
    Sphere__SetPosition(r28, (f29 * g94) + f28, (f30 * g94) + f27);
    SphereText__SetMaxSize(r28, lbl_80349E98, f30);
    SphereText__SetWrapWidth(r28, f29);
    SphereText__SetAlignment(r28, g94);
    Sphere__SetAnchor(r26, g94, lbl_80349E9C);
    Sphere__SetPosition(r26, (f29 * lbl_80349EA0) + f28, *(f32 *)((char *)arg0 + 48));
}
