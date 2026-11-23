/* Curve__DestroySequence @ 0x800E0D68 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801843CC(void *);
void fn_80184430(char *);
extern M2C_UNK lbl_8032E4A0 __attribute__((section(".data")));
extern M2C_UNK lbl_80332E18 __attribute__((section(".data")));

void Curve__DestroySequence(void *arg0, s32 arg1) {
    s8 *temp_r3;
    void *temp_r11;
    void *temp_r9;
    void *var_r31;

    temp_r11 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_8032E4A0;
    if (temp_r11 != NULL) {
        var_r31 = temp_r11 + (M2C_FIELD(temp_r11, s32 *, -8) * 0x34);
        if (temp_r11 != var_r31) {
            do {
                var_r31 -= 0x34;
                temp_r9 = M2C_FIELD(var_r31, void **, 0);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31 + M2C_FIELD(temp_r9, s16 *, 8), 0);
            } while ((void *) M2C_FIELD(arg0, void **, 8) != var_r31);
        }
        fn_80184430(M2C_FIELD(arg0, void **, 8) - 8);
    }
    temp_r3 = M2C_FIELD(arg0, s8 **, 0xC);
    if (temp_r3 != NULL) {
        fn_80184430(temp_r3);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &lbl_80332E18;
    if (arg1 & 1) {
        fn_801843CC(arg0);
    }
}
