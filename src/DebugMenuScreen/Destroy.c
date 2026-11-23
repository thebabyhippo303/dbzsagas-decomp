/* DebugMenuScreen__Destroy @ 0x8026295C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void DebugMenu__Destroy(void *, s32);
void Font__Destroy(void *, s32);
void SphereText__Destroy(void *, s32);
M2C_UNK DebugScreen__Destroy(s32, s32);
extern char lbl_8034BA40[];
void DebugMenuScreen__Destroy(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, char **, 0x19C) = lbl_8034BA40;
    DebugMenu__Destroy(arg0 + 0x43D0, 2);
    SphereText__Destroy(arg0 + 0x41DC, 2);
    Font__Destroy(arg0 + 0x1A0, 2);
    DebugScreen__Destroy((s32) arg0, arg1);
}
