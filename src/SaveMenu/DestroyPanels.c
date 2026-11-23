/* SaveMenu__DestroyPanels @ 0x800578F4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;

typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })\n\ntypedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void MenuPanel__Destroy(void *, s32);
void SaveMenu__Destroy(void *, s32);

void SaveMenu__DestroyPanels(void *arg0, s32 arg1) {
    char *base = (char *)arg0 + 327680;

    MenuPanel__Destroy(base + 16348, 2);
    MenuPanel__Destroy(base - 28340, 2);
    SaveMenu__Destroy(arg0, arg1);
}
