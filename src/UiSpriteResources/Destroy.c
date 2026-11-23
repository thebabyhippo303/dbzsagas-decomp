/* UiSpriteResources__Destroy @ 0x8000E538 (size: 0x270, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void EffectHandle__ReleaseAll(void);
void UiSpriteResources__ClearDatabaseHandles(void *);
void fn_801843CC(void *);
void * memset(void *, int, u32);
M2C_UNK UiSpriteResources__DestroyOverlayWidgets(void *, M2C_UNK); /* extern */

void UiSpriteResources__Destroy(void *arg0, s32 arg1) {
    void *temp_r27;
    void *temp_r27_2;
    void *temp_r27_3;
    void *temp_r27_4;
    void *temp_r28;
    void *temp_r28_2;
    void *temp_r28_3;
    void *temp_r28_4;
    void *temp_r28_5;
    void *temp_r28_6;
    void *temp_r29;
    void *temp_r30;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r31_3;
    void *temp_r31_4;
    void *temp_r31_5;
    void *temp_r31_6;
    void *temp_r3;
    void *temp_r3_10;
    void *temp_r3_11;
    void *temp_r3_12;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;

    EffectHandle__ReleaseAll();
    UiSpriteResources__ClearDatabaseHandles(arg0);
    temp_r31 = arg0 + 0x8240;
    temp_r28 = arg0 + 0x8230;
    if ((s32) M2C_FIELD(temp_r31, s32 *, 0x10) != 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x8240);
        if (temp_r3 != NULL) {
            memset(temp_r3, 0, M2C_FIELD(temp_r31, s32 *, 8) * 4);
        }
    }
    temp_r30 = temp_r28 + 0x10;
    M2C_FIELD(temp_r31, s32 *, 4) = 0;
    temp_r3_2 = M2C_FIELD(temp_r28, void **, 0x10);
    if (temp_r3_2 != NULL) {
        fn_801843CC(temp_r3_2);
    }
    M2C_FIELD(temp_r30, s32 *, 4) = 0;
    M2C_FIELD(temp_r30, s32 *, 8) = 0;
    temp_r31_2 = arg0 + 0x8218;
    M2C_FIELD(temp_r28, void **, 0x10) = NULL;
    temp_r28_2 = arg0 + 0x8208;
    if ((s32) M2C_FIELD(temp_r31_2, s32 *, 0x10) != 0) {
        temp_r3_3 = M2C_FIELD(arg0, void **, 0x8218);
        if (temp_r3_3 != NULL) {
            memset(temp_r3_3, 0, M2C_FIELD(temp_r31_2, s32 *, 8) * 4);
        }
    }
    temp_r27 = temp_r28_2 + 0x10;
    M2C_FIELD(temp_r31_2, s32 *, 4) = 0;
    temp_r3_4 = M2C_FIELD(temp_r28_2, void **, 0x10);
    if (temp_r3_4 != NULL) {
        fn_801843CC(temp_r3_4);
    }
    M2C_FIELD(temp_r27, s32 *, 8) = 0;
    temp_r31_3 = arg0 + 0x81F0;
    M2C_FIELD(temp_r27, s32 *, 4) = 0;
    M2C_FIELD(temp_r28_2, void **, 0x10) = NULL;
    temp_r27_2 = arg0 + 0x81E0;
    if ((s32) M2C_FIELD(temp_r31_3, s32 *, 0x10) != 0) {
        temp_r3_5 = M2C_FIELD(arg0, void **, 0x81F0);
        if (temp_r3_5 != NULL) {
            memset(temp_r3_5, 0, M2C_FIELD(temp_r31_3, s32 *, 8) * 4);
        }
    }
    temp_r28_3 = temp_r27_2 + 0x10;
    M2C_FIELD(temp_r31_3, s32 *, 4) = 0;
    temp_r3_6 = M2C_FIELD(temp_r27_2, void **, 0x10);
    if (temp_r3_6 != NULL) {
        fn_801843CC(temp_r3_6);
    }
    M2C_FIELD(temp_r28_3, s32 *, 8) = 0;
    temp_r31_4 = arg0 + 0x81C8;
    M2C_FIELD(temp_r28_3, s32 *, 4) = 0;
    M2C_FIELD(temp_r27_2, void **, 0x10) = NULL;
    temp_r28_4 = arg0 + 0x81B8;
    if ((s32) M2C_FIELD(temp_r31_4, s32 *, 0x10) != 0) {
        temp_r3_7 = M2C_FIELD(arg0, void **, 0x81C8);
        if (temp_r3_7 != NULL) {
            memset(temp_r3_7, 0, M2C_FIELD(temp_r31_4, s32 *, 8) * 4);
        }
    }
    temp_r27_3 = temp_r28_4 + 0x10;
    M2C_FIELD(temp_r31_4, s32 *, 4) = 0;
    temp_r3_8 = M2C_FIELD(temp_r28_4, void **, 0x10);
    if (temp_r3_8 != NULL) {
        fn_801843CC(temp_r3_8);
    }
    M2C_FIELD(temp_r27_3, s32 *, 8) = 0;
    temp_r31_5 = arg0 + 0x81A0;
    M2C_FIELD(temp_r27_3, s32 *, 4) = 0;
    M2C_FIELD(temp_r28_4, void **, 0x10) = NULL;
    temp_r27_4 = arg0 + 0x8190;
    if ((s32) M2C_FIELD(temp_r31_5, s32 *, 0x10) != 0) {
        temp_r3_9 = M2C_FIELD(arg0, void **, 0x81A0);
        if (temp_r3_9 != NULL) {
            memset(temp_r3_9, 0, M2C_FIELD(temp_r31_5, s32 *, 8) * 4);
        }
    }
    temp_r28_5 = temp_r27_4 + 0x10;
    M2C_FIELD(temp_r31_5, s32 *, 4) = 0;
    temp_r3_10 = M2C_FIELD(temp_r27_4, void **, 0x10);
    if (temp_r3_10 != NULL) {
        fn_801843CC(temp_r3_10);
    }
    M2C_FIELD(temp_r28_5, s32 *, 8) = 0;
    temp_r31_6 = arg0 + 0x8178;
    M2C_FIELD(temp_r28_5, s32 *, 4) = 0;
    M2C_FIELD(temp_r27_4, void **, 0x10) = NULL;
    temp_r28_6 = arg0 + 0x8168;
    if ((s32) M2C_FIELD(temp_r31_6, s32 *, 0x10) != 0) {
        temp_r3_11 = M2C_FIELD(arg0, void **, 0x8178);
        if (temp_r3_11 != NULL) {
            memset(temp_r3_11, 0, M2C_FIELD(temp_r31_6, s32 *, 8) * 4);
        }
    }
    temp_r29 = temp_r28_6 + 0x10;
    M2C_FIELD(temp_r31_6, s32 *, 4) = 0;
    temp_r3_12 = M2C_FIELD(temp_r28_6, void **, 0x10);
    if (temp_r3_12 != NULL) {
        fn_801843CC(temp_r3_12);
    }
    M2C_FIELD(temp_r29, s32 *, 4) = 0;
    M2C_FIELD(temp_r29, s32 *, 8) = 0;
    M2C_FIELD(temp_r28_6, void **, 0x10) = NULL;
    UiSpriteResources__DestroyOverlayWidgets(arg0 + 0x8C, 2);
    if (arg1 & 1) {
        fn_801843CC(arg0);
    }
}
