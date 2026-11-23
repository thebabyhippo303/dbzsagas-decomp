/* VertexStream__Enable @ 0x80248464 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern s32 lbl_80374410 __attribute__((section(".data")));
extern s32 lbl_8037442C __attribute__((section(".data")));
extern s32 lbl_80374448 __attribute__((section(".data")));
extern M2C_UNK lbl_80374464 __attribute__((section(".data")));
extern s32 lbl_803DCDE4;

void VertexStream__Enable(s32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
        lbl_80374410 = 1;
        return;
    case 1:
        lbl_8037442C = arg0;
        return;
    case 2:
        lbl_80374448 = 1;
        return;
    case 3:
        *(s32 *)((char *)&lbl_80374464 + (lbl_803DCDE4 * 0x1C)) = 1;
        return;
    }
}
