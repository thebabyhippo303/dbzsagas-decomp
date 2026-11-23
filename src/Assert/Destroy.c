/* Assert__Destroy @ 0x8017E148 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801843CC(void *);
void fn_80184430(char *);
extern M2C_UNK lbl_8033D160 __attribute__((section(".data")));
extern M2C_UNK lbl_8033D190 __attribute__((section(".data")));

void Assert__Destroy(void *arg0, s32 arg1) {
    s32 var_r29;
    s32 var_r30;
    s8 *temp_r3;

    temp_r3 = M2C_FIELD(arg0, s8 **, 0xC);
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &lbl_8033D160;
    if (temp_r3 != NULL) {
        fn_80184430(temp_r3);
    }
    temp_r3 = M2C_FIELD(arg0, s8 **, 8);
    if (temp_r3 != NULL) {
        fn_80184430(temp_r3);
    }
    var_r30 = 0;
    if (var_r30 < M2C_FIELD(arg0, s32 *, 0)) {
        var_r29 = 0;
        do {
            temp_r3 = M2C_FIELD((var_r29 + M2C_FIELD(arg0, s32 *, 4)), s8 **, 0);
            if (temp_r3 != NULL) {
                fn_80184430(temp_r3);
            }
            var_r30 += 1;
            var_r29 += 4;
        } while (var_r30 < M2C_FIELD(arg0, s32 *, 0));
    }
    temp_r3 = M2C_FIELD(arg0, s8 **, 4);
    if (temp_r3 != NULL) {
        fn_80184430(temp_r3);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &lbl_8033D190;
    if (arg1 & 1) {
        fn_801843CC(arg0);
    }
}
