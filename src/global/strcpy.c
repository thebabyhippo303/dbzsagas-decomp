/* strcpy @ 0x80163944 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void strcpy(s32 arg0, s32 arg1) {
    s32 temp_r11;
    s32 temp_r11_2;
    s32 var_r10;
    s32 var_r11;
    s32 var_r4;
    u8 temp_r0;

    var_r4 = arg1;
    var_r11 = arg0;
    if (!((var_r4 | arg0) & 3)) {
        temp_r11 = *var_r4;
        var_r10 = arg0;
        if (!((temp_r11 + 0xFEFEFEFF) & ~temp_r11 & 0x80808080)) {
            do {
                *var_r10 = (s32) M2C_FIELD(var_r4, s32 *, 0);
                var_r10 += 4;
                temp_r11_2 = M2C_FIELD(var_r4, s32 *, 4);
                var_r4 += 4;
            } while (!((temp_r11_2 + 0xFEFEFEFF) & ~temp_r11_2 & 0x80808080));
        }
        var_r11 = var_r10;
    }
    do {
        temp_r0 = *var_r4;
        var_r4 += 1;
        *var_r11 = temp_r0;
        var_r11 += 1;
    } while ((s8) temp_r0 != 0);
}

