/* sinf @ 0x8016000C (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 __ieee754_rem_pio2f(f32 *);                     /* extern */
f32 __kernel_cosf(f32, f32);                        /* extern */
f32 __kernel_sinf(M2C_UNK, f32, f32);               /* extern */

f32 sinf(f32 farg0) {
    f32 sp10;
    f32 sp8;
    f32 var_f1;
    s32 temp_r3;
    s32 temp_r9;

    sp10 = farg0;
    temp_r9 = M2C_BITWISE(s32, sp10) & 0x7FFFFFFF;
    if (temp_r9 <= 0x3F490FD8) {
        return __kernel_sinf(0);
    }
    if (temp_r9 > 0x7F7FFFFF) {
        return farg0 - farg0;
    }
    temp_r3 = __ieee754_rem_pio2f(&sp8) & 3;
    switch (temp_r3) {                              /* irregular */
    case 0:
        return __kernel_sinf(1, sp8, spC);
    case 1:
        return __kernel_cosf(sp8, spC);
    case 2:
        var_f1 = __kernel_sinf(1, sp8, spC);
block_14:
        return -var_f1;
    default:
        var_f1 = __kernel_cosf(sp8, spC);
        goto block_14;
    }
}
