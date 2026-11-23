/* UIList__SelectByValue @ 0x8013587C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void UIList__SelectByValue(void *arg0, s32 arg1) {
    s32 var_r10;
    void **var_r11;
    void *temp_r9;
    void *temp_r9_2;

    temp_r9 = arg0 + 0x340;
    var_r10 = 0;
    if ((s32) M2C_FIELD(temp_r9, s32 *, 4) > 0) {
        var_r11 = M2C_FIELD(arg0, void ***, 0x340);
        do {
            temp_r9_2 = *var_r11;
            var_r11 += 4;
            if ((s32) M2C_FIELD(temp_r9_2, s32 *, 4) == arg1) {
                M2C_FIELD(arg0, s32 *, 0x35C) = var_r10;
            }
            var_r10 += 1;
        } while (var_r10 < (s32) M2C_FIELD(temp_r9, s32 *, 4));
    }
}

