/* DebugTextPager__Destroy @ 0x8026F7EC (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__DestroyCore(void *, s32);
void DebugTextPager__DestroyPages(void *);
void DebugTextPage__Destroy(void *, s32);
extern char lbl_8034A268[];

void DebugTextPager__Destroy(char *arg0, s32 arg1) {
    *(char **)(arg0 + 0x19C) = lbl_8034A268;
    DebugTextPager__DestroyPages(arg0);
    DebugTextPage__Destroy(arg0 + 0x4E0, 2);
    Sphere__DestroyCore(arg0 + 0x340, 2);
    Sphere__DestroyCore(arg0 + 0x1A0, 2);
    Sphere__DestroyCore(arg0, arg1);
}
