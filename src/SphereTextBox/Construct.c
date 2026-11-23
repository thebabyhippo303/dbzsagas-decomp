/* SphereTextBox__Construct @ 0x80272A8C (size: 0xF4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__Construct(void *);
void Sphere__ResetProperties(void *);
void SphereTextBox__SetSize(void *, f32);
void SphereTextBox__SetSpacing(void *, f32);
void SphereTextBox__SetLineSpacing(void *, f32);
void SphereTextBox__SetAlignment(void *, f32);
void SphereTextBox__SetWrapWidth(void *, f32);
void SphereTextBox__SetMaxSize(void *, f32, f32);
void SphereTextBox__SetFirstLineOffset(void *, f32);
void *Font__GetDefault(void);
void SphereTextBox__InitializeFont(void *, void *, f32, f32);
void fn_802734D8(void *, f32);
extern f32 lbl_8034A054 __attribute__((section(".data")));
extern f32 lbl_8034A058 __attribute__((section(".data")));
extern f32 lbl_8034A05C __attribute__((section(".data")));
extern char lbl_8034D720[] __attribute__((section(".data")));

void *SphereTextBox__Construct(void *arg0) {
    f32 g1;
    f32 g2;
    void *table;

    Sphere__Construct(arg0);
    g1 = lbl_8034A054;
    g2 = lbl_8034A058;
    table = (void *)lbl_8034D720;
    M2C_FIELD(arg0, f32 *, 0x1A8) = g1;
    M2C_FIELD(arg0, void **, 0x19C) = table;
    M2C_FIELD(arg0, f32 *, 0x1AC) = g2;
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    Sphere__ResetProperties(arg0);
    SphereTextBox__SetSize(arg0, g1);
    SphereTextBox__SetSpacing(arg0, g1);
    fn_802734D8(arg0, g1);
    SphereTextBox__SetLineSpacing(arg0, g1);
    SphereTextBox__SetAlignment(arg0, g1);
    SphereTextBox__SetWrapWidth(arg0, g1);
    SphereTextBox__SetMaxSize(arg0, g1, g1);
    SphereTextBox__SetFirstLineOffset(arg0, g1);
    SphereTextBox__InitializeFont(arg0, Font__GetDefault(), lbl_8034A05C, g1);
    return arg0;
}
