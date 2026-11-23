/* AI__SelectRandomStateForImmuneTarget @ 0x80062BF8 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Rand__RangeInt(void *, int, int);
extern char lbl_803DD634[8] __attribute__((section(".sbss")));

s32 AI__SelectRandomActionForImmuneTarget(void) {
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = Rand__RangeInt((void *)lbl_803DD634, 0, 0x64);
    var_r0 = 0x86;
    if (temp_r3 <= 4) {
        var_r0 = 0x74;
    } else if (temp_r3 <= 9) {
        var_r0 = 0x75;
    } else if (temp_r3 <= 0x45) {
        var_r0 = 0x76;
    }
    return var_r0;
}
