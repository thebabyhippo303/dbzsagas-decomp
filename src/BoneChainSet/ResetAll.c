/* BoneChainSet__ResetAll @ 0x801DB5C8 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void BoneChainSet__ResetAll(void **arg0) {
    void *temp_r9;
    void *var_r31;

    var_r31 = *arg0;
    if (var_r31 != NULL) {
        do {
            temp_r9 = M2C_FIELD(var_r31, void **, 0x34);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(var_r31 + M2C_FIELD(temp_r9, s16 *, 0x38));
            var_r31 = M2C_FIELD(var_r31, void **, 0x17C);
        } while (var_r31 != NULL);
    }
}
