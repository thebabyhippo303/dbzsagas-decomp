/* Simple__ApplyObjectFadeEnd @ 0x802CB7DC (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Render__SetObjectFadeEnd(void *, void *, f32);
extern void *lbl_803DCE84;

void Simple__ApplyObjectFadeEnd(void *arg0, f32 farg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x3FC);
    if (temp_r4 != NULL) {
        Render__SetObjectFadeEnd(lbl_803DCE84, temp_r4, farg0);
    }
}
