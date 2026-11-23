/* ProgressArrow__ResetDisplayAfterExpiry @ 0x8011F634 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80246B54(void *);
extern f32 lbl_80327314 __attribute__((section(".data")));

void ProgressArrow__ResetDisplayAfterExpiry(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), void **, 0x90);
    M2C_FIELD(temp_r3, f32 *, 0x24) = (f32) lbl_80327314;
    fn_80246B54(temp_r3);
}
