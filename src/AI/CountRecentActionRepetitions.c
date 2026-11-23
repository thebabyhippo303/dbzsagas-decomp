/* AI__CountRecentActionRepetitions @ 0x8007294C (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 AI__CountRecentActionRepetitions(void *arg0) {
    s32 *var_r9;
    s32 var_r10;
    s32 var_r11;

    var_r10 = 1;
    var_r11 = 1;
    var_r9 = arg0 + 0x50;
    do {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) == (s32) *var_r9) {
            var_r10 += 1;
        } else {
            var_r9 = arg0 + 0x74;
            var_r11 = 0xA;
        }
        var_r11 += 1;
        var_r9 += 4;
    } while (var_r11 <= 9);
    return var_r10;
}
