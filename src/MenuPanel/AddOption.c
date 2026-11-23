/* MenuPanel__AddOption @ 0x80267EE8 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *Mem__New(u32);
void *MenuOption__Construct(void *, s32);
void Sphere__SetAnchor(void *, f32, f32);
void Sphere__AddChild(void *, void *);
void SphereText__SetText(void *, void *);
void Sphere__EnsureAnimSet(void *, s32);
void Sphere__SetColor(void *, f32, f32, f32, f32);
void EzNode__AddChild(void *, void *);
extern f32 lbl_80349DF4 __attribute__((section(".data")));

void MenuPanel__AddOption(void *arg0, void *arg1, s32 arg2) {
    void *opt;
    void *anim;

    opt = MenuOption__Construct(Mem__New(0x54C), arg2);
    if (opt != NULL) {
        anim = (char *)opt + 0x18;
        Sphere__EnsureAnimSet(anim, 0);
        SphereText__SetText(anim, arg1);
        Sphere__SetAnchor(anim, lbl_80349DF4, lbl_80349DF4);
        Sphere__AddChild((char *)arg0 + 0x1A4, anim);
        if (opt == M2C_FIELD(arg0, void **, 0xADF8)) {
            Sphere__SetColor(anim, M2C_FIELD(arg0, f32 *, 0xAE10), M2C_FIELD(arg0, f32 *, 0xAE14),
                M2C_FIELD(arg0, f32 *, 0xAE18), M2C_FIELD(arg0, f32 *, 0xAE1C));
        } else {
            Sphere__SetColor(anim, M2C_FIELD(arg0, f32 *, 0xAE00), M2C_FIELD(arg0, f32 *, 0xAE04),
                M2C_FIELD(arg0, f32 *, 0xAE08), M2C_FIELD(arg0, f32 *, 0xAE0C));
        }
    }
    EzNode__AddChild((char *)arg0 + 0xADE4, opt);
}
