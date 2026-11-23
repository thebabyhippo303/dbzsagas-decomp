/* AvatarControls__IsActionReleasedImpl @ 0x80125E90 (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type *)((char *)(expr) + (offset)))
s32 AvatarControls__IsActionReleasedImpl(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0, temp_r0_2, temp_r0_3; register s32 *temp_r10; s32 temp_r11, temp_r11_2;
    s32 temp_r3, temp_r4, temp_r4_2, temp_r4_3;
    s32 var_r4, var_r8, var_r8_2, var_r9, var_r9_2;
    temp_r10 = (s32 *)*arg0;
    if (temp_r10 == 0) return 0;
    if (arg2 != 0) {
        var_r4 = 0;
        temp_r3 = ((s32 *)((char *)arg0 + 0x60))[arg1] * 8;
        if (*(s32 *)((char *)temp_r10 + temp_r3) == 1) {
            temp_r0 = *(s32 *)((char *)temp_r10 + 4 + temp_r3);
            var_r4 = temp_r0 == 0;
        }
        return var_r4;
    }
    temp_r4 = arg1 * 4;
    if (((s32 *)((char *)arg0 + 0xA4))[arg1] != 0) {
        var_r8_2 = 0;
        temp_r4_2 = ((s32 *)((char *)arg0 + 0x60))[arg1];
        var_r9 = 0;
        temp_r11 = temp_r4_2 * 8;
        if (*(s32 *)((char *)temp_r10 + temp_r11) == 1) {
            temp_r0_2 = *(s32 *)((char *)temp_r10 + 4 + temp_r11);
            var_r9 = temp_r0_2 == 0;
        }
        if ((var_r9 != 0) && (((s32 *)((char *)arg0 + 0xE8))[temp_r4_2] != 0)) var_r8_2 = 1;
        return var_r8_2;
    }
    var_r8 = 0;
    temp_r4_3 = ((s32 *)((char *)arg0 + 0x60))[arg1];
    var_r9_2 = 0;
    temp_r11_2 = temp_r4_3 * 8;
    if (*(s32 *)((char *)temp_r10 + temp_r11_2) == 1) {
        temp_r0_3 = *(s32 *)((char *)temp_r10 + 4 + temp_r11_2);
        var_r9_2 = temp_r0_3 == 0;
    }
    if ((var_r9_2 != 0) && (((s32 *)((char *)arg0 + 0xE8))[temp_r4_3] == 0)) var_r8 = 1;
    return var_r8;
}
