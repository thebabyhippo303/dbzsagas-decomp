/* RenderState__Initialize @ 0x80240FBC (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void memset(void *, int, unsigned int);
void fn_80249DE4(void);
void RenderState__ResetTextureStages(void);
void RenderState__MarkAllDirty(void);
void RenderState__SetDefaults(void);
extern char lbl_803B1848[];
void RenderState__Initialize(void) {
    fn_80249DE4();
    RenderState__ResetTextureStages();
    memset(lbl_803B1848, 0, 372);
    RenderState__MarkAllDirty();
    RenderState__SetDefaults();
}
