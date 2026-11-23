/* PathManager__FindGroup @ 0x801FCEE4 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 String__CompareIgnoreCaseAscii(s32, s32);  /* extern */

s32 *PathManager__FindGroup(s32 arg0, s32 arg1) {
    u8 *var_r31;
    s32 *temp_r4;
    s32 var_r30;

    var_r31 = arg0 + 8;
    var_r30 = 0;
loop_1:
    temp_r4 = *(s32 **)var_r31;
    if ((temp_r4 != NULL) && (String__CompareIgnoreCaseAscii(arg1, *temp_r4) == 0)) {
        return *(s32 **)var_r31;
    }
    var_r30 += 1;
    var_r31 += 4;
    if (var_r30 > 0x1F) {
        return NULL;
    }
    goto loop_1;
}
