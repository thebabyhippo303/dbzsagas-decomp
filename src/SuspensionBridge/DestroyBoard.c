/* SuspensionBridge__DestroyBoard @ 0x800F8FFC (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 SuspensionBridge__DestroyBoard(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r9_2)(void *);
    s32 temp_r30;
    s32 temp_r31;
    void *temp_r11;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_3;

    temp_r30 = arg1 * 4;
    temp_r31 = arg0 + 0x590;
    temp_r3 = *(void * *)(temp_r31 + temp_r30);
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x34);
    temp_r9_2 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x14);
    temp_r9_2(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x10));
    temp_r11 = *(void * *)(temp_r31 + temp_r30);
    if (temp_r11 != NULL) {
        temp_r9_3 = M2C_FIELD(temp_r11, void **, 0x34);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
    }
    *(s32 *)(temp_r31 + temp_r30) = 0;
    return 0;
}

