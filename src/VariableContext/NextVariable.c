/* VariableContext__NextVariable @ 0x8018E3D4 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 VariableContext__NextVariable(void *arg0, s32 *arg1) {
    s32 *var_r3;
    s32 temp_r0;
    s32 temp_r11;
    s32 var_r11;
    void *temp_r3;

    temp_r11 = *arg1;
    if (temp_r11 >= (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 4)) {
        return 0;
    }
    *arg1 = temp_r11 + 1;
    var_r11 = temp_r11;
    temp_r3 = M2C_FIELD(arg0, void **, 0x28);
    if (var_r11 < 0) {
        var_r11 = M2C_FIELD(temp_r3, s32 *, 4) - 1;
    }
    temp_r0 = M2C_FIELD(temp_r3, s32 *, 4);
    if ((var_r11 >= temp_r0) || (temp_r0 == 0)) {
        var_r3 = NULL;
    } else {
        var_r3 = M2C_FIELD(temp_r3, s32 *, 0) + (var_r11 * 4);
    }
    return *var_r3;
}
