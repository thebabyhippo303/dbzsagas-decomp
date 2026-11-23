/* DebugSession__InitStaticConfig @ 0x802CC834 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { int f0; int f4; float f8; } DSCfg;

extern float lbl_803542C0 __attribute__((section(".data")));

DSCfg *DebugSession__InitStaticConfig(DSCfg *self) {
    float v = lbl_803542C0;
    DSCfg *p = self;
    p->f0 = 0x61A80;
    p->f4 = 0x190;
    p->f8 = v;
    return self;
}
