/* WeaponObjectList__Destroy @ 0x800DF33C (size: 0x130, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801843CC(void *);
void * memset(void *, int, u32);
extern s32 lbl_803DC5DC;

void WeaponObjectList__Destroy(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r31;
    u32 temp_r29;
    u32 temp_r9;
    void **var_r3;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9_2;
    void *self;
    s32 flag4;
    s32 zero;

    self = arg0;
    zero = 0;
    flag4 = M2C_FIELD(self, s32 *, 4);
    arg1 = arg1;
    lbl_803DC5DC = zero;
    if (flag4 != 0) {
        var_r31 = 0;
        temp_r29 = M2C_FIELD(M2C_FIELD(self, void **, 0), u32 *, 4);
        if ((u32) var_r31 < temp_r29) {
            do {
                temp_r11 = M2C_FIELD(self, void **, 0);
                var_r0 = var_r31;
                if (var_r31 < 0) {
                    var_r0 = M2C_FIELD(temp_r11, u32 *, 4) - 1;
                }
                temp_r9 = M2C_FIELD(temp_r11, u32 *, 4);
                if ((var_r0 >= (s32) temp_r9) || ((s32) temp_r9 == 0)) {
                    var_r3 = NULL;
                } else {
                    var_r3 = M2C_FIELD(temp_r11, void **, 0) + (var_r0 * 4);
                }
                temp_r11_2 = *var_r3;
                if (temp_r11_2 != NULL) {
                    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x54);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
                }
                var_r31 += 1;
            } while ((u32) var_r31 < temp_r29);
        }
    }
    temp_r31 = M2C_FIELD(self, void **, 0);
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
        temp_r3 = M2C_FIELD(temp_r31, void **, 0);
        if (temp_r3 != NULL) {
            memset(temp_r3, 0, M2C_FIELD(temp_r31, s32 *, 8) * 4);
        }
    }
    M2C_FIELD(temp_r31, u32 *, 4) = 0U;
    temp_r31_2 = M2C_FIELD(self, void **, 0);
    if (temp_r31_2 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r31_2, void **, 0);
        if (temp_r3_2 != NULL) {
            fn_801843CC(temp_r3_2);
        }
        fn_801843CC(temp_r31_2);
    }
    if (arg1 & 1) {
        fn_801843CC(self);
    }
}
