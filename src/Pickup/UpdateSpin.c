/* Pickup__UpdateSpin @ 0x800F2244 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__UpdateSpin @ 0x800F2244 (0x94). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 floorf(f32);
f32 fmodf(f32, f32);
M2C_UNK fn_802B34D8(void *, f32);
extern f32 lbl_80324130 __attribute__((section(".data")));
extern f32 lbl_80324134 __attribute__((section(".data")));
extern f32 lbl_80324138 __attribute__((section(".data")));
extern f32 lbl_8032413C __attribute__((section(".data")));
extern f32 lbl_8036B238[] __attribute__((section(".data")));

void Pickup__UpdateSpin(void *arg0) {
    f32 temp_f31;
    s32 index;

    temp_f31 = lbl_80324130;
    index = (s32) floorf(fmodf(M2C_FIELD(arg0, f32 *, 0x628) * temp_f31, lbl_80324134) * lbl_80324138);
    fn_802B34D8(arg0, M2C_FIELD(arg0, f32 *, 0x60C) + (lbl_8036B238[index] * temp_f31 + lbl_8032413C));
}
