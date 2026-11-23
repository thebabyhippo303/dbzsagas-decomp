/* Avatar__RefreshConfigAndControlModes @ 0x8008CB08 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_8009C720(void *);                        /* extern */

void Avatar__RefreshConfigAndControlModes(void *arg0) {
    s32 var_r30;
    void **var_r31;
    void *temp_r3;
    void *temp_r9;

    var_r30 = 6;
    var_r31 = arg0 + 0x7E8;
    fn_8009C720((char *) arg0 + 0x694);
    do {
        temp_r3 = *var_r31;
        var_r31 += 4;
        temp_r9 = M2C_FIELD(temp_r3, void **, 4);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x14)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x10));
        var_r30 -= 1;
    } while (var_r30 != 0);
}
