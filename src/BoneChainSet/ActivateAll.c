/* BoneChainSet__ActivateAll @ 0x801DB61C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void BoneChainSet__ActivateAll(void **arg0) {
    void *temp_r0;
    void *var_r3;

    var_r3 = *arg0;
    if (var_r3 != NULL) {
        do {
            temp_r0 = M2C_FIELD(var_r3, void **, 0);
            M2C_FIELD(var_r3, s32 *, 0x188) = 1;
            if (temp_r0 != NULL) {
                var_r3 = temp_r0;
            } else {
                var_r3 = M2C_FIELD(var_r3, void **, 0x17C);
            }
        } while (var_r3 != NULL);
    }
}
