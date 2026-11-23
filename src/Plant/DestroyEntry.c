/* Plant__DestroyEntry @ 0x800F6420 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801843CC(void *);
void Plant__DestroyEntry(void *arg0, s32 arg1) {
    void **temp_r9_2;
    void *temp_r30;
    void *temp_r9;
    void *var_r30;

    temp_r9 = M2C_FIELD(arg0, void **, 0);
    if (temp_r9 != NULL) {
        M2C_FIELD(temp_r9, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    }
    temp_r9_2 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r9_2 != NULL) {
        *temp_r9_2 = M2C_FIELD(arg0, void **, 0);
    }
    var_r30 = M2C_FIELD(arg0, void **, 8);
    if (var_r30 != NULL) {
        do {
            temp_r30 = M2C_FIELD(var_r30, void **, 8);
            fn_801843CC(var_r30);
            var_r30 = temp_r30;
        } while (var_r30 != NULL);
    }
    if (arg1 & 1) {
        fn_801843CC(arg0);
    }
}
