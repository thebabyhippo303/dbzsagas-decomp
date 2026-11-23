/* MenuPanelBox__SetText @ 0x80273DE8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SphereText__SetText(void *, void *);
void MenuPanelBox__SetText(void *arg0, void *arg1, f32 farg0, f32 farg1) {
    SphereText__SetText(arg0 + 0x2BE0, arg1);
    M2C_FIELD(arg0, f32 *, 0x2DD4) = farg0;
    M2C_FIELD(arg0, f32 *, 0x2DD8) = farg1;
}
