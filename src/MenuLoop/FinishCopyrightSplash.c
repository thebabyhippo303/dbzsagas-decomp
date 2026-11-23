/* MenuLoop__FinishCopyrightSplash @ 0x8004CA5C (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void UI__SetColorRGBA(void *, f32, f64, f64, f32);
void * dblLoad(const char *, void *, int);
void fn_802707A8(void *);
extern s8 lbl_80319754 __attribute__((section(".data")));
extern f32 lbl_80319770 __attribute__((section(".data")));
extern f32 lbl_80319774 __attribute__((section(".data")));
extern s32 lbl_803DC3C0;

s32 MenuLoop__FinishCopyrightSplash(void *arg0) {
    void *temp_r30;

    if ((s32) lbl_803DC3C0 == 0) {
        dblLoad(&lbl_80319754, NULL, 0);
    }
    temp_r30 = arg0 + 0x1C;
    fn_802707A8(temp_r30);
    UI__SetColorRGBA(temp_r30, lbl_80319770, lbl_80319770, lbl_80319770, lbl_80319774);
    M2C_FIELD(arg0, s32 *, 0xBD0) = 2;
    return 1;
}
