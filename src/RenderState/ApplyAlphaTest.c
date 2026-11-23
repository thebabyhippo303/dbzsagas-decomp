/* RenderState__ApplyAlphaTest @ 0x8024B404 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern int RenderState__Get(int);
extern void GXSetZCompLoc(int);
extern void GXSetAlphaCompare(int, int, int, int, int);
extern unsigned int lbl_80374530[];

void RenderState__ApplyAlphaTest(void) {
    int cmp;
    unsigned char bref;
    int ref;
    unsigned int t;
    if (RenderState__Get(17) == 1) {
        t = RenderState__Get(18);
        if (t <= 7u) {
            cmp = lbl_80374530[t];
        } else {
            cmp = 7;
        }
        ref = RenderState__Get(19);
        if (ref < 0) {
            ref = 0;
        } else if (ref > 255) {
            ref = 255;
        }
        bref = (unsigned char)ref;
        GXSetZCompLoc(0);
        GXSetAlphaCompare(cmp, bref, 0, 7, 0);
        return;
    }
    GXSetZCompLoc(1);
    GXSetAlphaCompare(7, 0, 0, 7, 0);
}
