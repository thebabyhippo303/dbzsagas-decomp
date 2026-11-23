/* MainMenu__GetCenterCharacterCardY @ 0x80011C90 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

M2C_UNK fn_8026B420(s32);                           /* extern */
M2C_UNK fn_8026C514(void *, M2C_UNK *, f32 *);      /* extern */

f32 MainMenu__GetCenterCharacterCardY(void *arg0) {
    f32 spC;
    M2C_UNK sp8;
    s32 var_r30;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x22A4);
    var_r30 = 6;
    if (var_r31 != NULL) {
        do {
            fn_8026B420(M2C_FIELD(var_r31, s32 *, 0x164));
            if (var_r30 == 3) {
                fn_8026C514(var_r31, &sp8, &spC);
            }
            var_r31 = M2C_FIELD(var_r31, void **, 0x1B0);
            var_r30 -= 1;
        } while (var_r31 != NULL);
    }
    return spC;
}
