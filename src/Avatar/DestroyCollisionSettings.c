/* Avatar__DestroyCollisionSettings @ 0x8009C094 (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void fn_802548A8(s32, s32);
extern s32 lbl_803DC590;
extern s32 lbl_803DC594;
extern s32 lbl_803DC598;
extern s32 lbl_803DC59C;
extern void *lbl_803DD95C;
extern void *lbl_803DD960;
extern void *lbl_803DD964;
extern void *lbl_803DD968;

void Avatar__DestroyCollisionSettings(void) {
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    if ((s32) lbl_803DC594 != 0) {
        fn_802548A8(lbl_803DC594, 3);
    }
    if ((void *) lbl_803DD95C != NULL) {
        temp_r9 = M2C_FIELD(lbl_803DD95C, void **, 0x10);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(lbl_803DD95C + M2C_FIELD(temp_r9, s16 *, 8), 3);
    }
    if ((void *) lbl_803DD960 != NULL) {
        temp_r9_2 = M2C_FIELD(lbl_803DD960, void **, 8);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(lbl_803DD960 + M2C_FIELD(temp_r9_2, s16 *, 8), 3);
    }
    if ((s32) lbl_803DC598 != 0) {
        fn_802548A8(lbl_803DC598, 3);
    }
    if ((s32) lbl_803DC59C != 0) {
        fn_802548A8(lbl_803DC59C, 3);
    }
    if ((void *) lbl_803DD964 != NULL) {
        temp_r9_3 = M2C_FIELD(lbl_803DD964, void **, 0x10);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(lbl_803DD964 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
    }
    if ((void *) lbl_803DD968 != NULL) {
        temp_r9_4 = M2C_FIELD(lbl_803DD968, void **, 8);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0xC)(lbl_803DD968 + M2C_FIELD(temp_r9_4, s16 *, 8), 3);
    }
    lbl_803DC590 = 0;
    lbl_803DC594 = 0;
    lbl_803DD95C = NULL;
    lbl_803DD960 = NULL;
    lbl_803DC598 = 0;
    lbl_803DC59C = 0;
    lbl_803DD964 = NULL;
    lbl_803DD968 = NULL;
}
