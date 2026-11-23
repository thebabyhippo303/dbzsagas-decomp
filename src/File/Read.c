/* File__Read @ 0x80187CDC (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK memcpy(s32, s32, s32);                      /* extern */

s32 File__Read(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r9;
    s32 var_r31;

    var_r31 = arg2;
    if (arg1 == 0) return 0;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r4 == 0) return 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r9 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r0 -= temp_r9;
    if (temp_r0 == 0) return 0;
    if (var_r31 > temp_r0) {
        var_r31 = temp_r0;
    }
    memcpy(arg1, temp_r4 + temp_r9, var_r31);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + var_r31);
    return var_r31;
}
