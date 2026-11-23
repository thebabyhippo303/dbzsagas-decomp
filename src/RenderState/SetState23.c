/* RenderState__SetState23 @ 0x8024AEA0 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 RenderState__Get(s32);
void RenderState__Set(int, void *);
M2C_UNK RenderState__IsLocked(s32);
extern s32 lbl_803AD9E8 __attribute__((section(".data")));

void RenderState__SetState23(void *arg0) {
    s32 var_r0;
    void *var_r31;

    var_r31 = arg0;
    if ((RenderState__Get(0x17) == 0) && (RenderState__IsLocked(0x17) != 0)) {
        var_r0 = 0;
    } else {
        var_r0 = lbl_803AD9E8;
    }
    if (var_r0 == 0) {
        var_r31 = NULL;
    }
    RenderState__Set(0x17, var_r31);
}
