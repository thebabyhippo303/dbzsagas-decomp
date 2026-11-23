/* Options__DestroySettingsArrays @ 0x80126CE0 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_801843CC(void *);
void * memset(void *, int, u32);
void Options__DestroySettingsArrays(void *arg0, s32 arg1) {
    void *temp_r29;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0);
        if (temp_r3 != NULL) {
            memset(temp_r3, 0, M2C_FIELD(arg0, s32 *, 8) * 0x24);
        }
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if (temp_r3_2 != NULL) {
        fn_801843CC(temp_r3_2);
    }
    M2C_FIELD(arg0, void **, 0) = NULL;
    temp_r29 = arg0 + 0x18;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    if ((s32) M2C_FIELD(temp_r29, s32 *, 0x10) != 0) {
        temp_r3_3 = M2C_FIELD(arg0, void **, 0x18);
        if (temp_r3_3 != NULL) {
            memset(temp_r3_3, 0, M2C_FIELD(temp_r29, s32 *, 8) * 0x24);
        }
    }
    M2C_FIELD(temp_r29, s32 *, 4) = 0;
    temp_r3_4 = M2C_FIELD(arg0, void **, 0x18);
    if (temp_r3_4 != NULL) {
        fn_801843CC(temp_r3_4);
    }
    M2C_FIELD(temp_r29, s32 *, 8) = 0;
    M2C_FIELD(temp_r29, s32 *, 4) = 0;
    M2C_FIELD(arg0, void **, 0x18) = NULL;
    temp_r3_5 = M2C_FIELD(arg0, void **, 0);
    if (temp_r3_5 != NULL) {
        fn_801843CC(temp_r3_5);
    }
    if (arg1 & 1) {
        fn_801843CC(arg0);
    }
}

