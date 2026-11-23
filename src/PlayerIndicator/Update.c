/* PlayerIndicator__Update @ 0x8011EF90 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Game__GetPlayerImpl(void *, int);
M2C_UNK PlayerIndicator__ComputeActorBounds(void *, void *); /* extern */
extern void *lbl_803DC3C0;
extern void *lbl_803DC6A4;
extern void *lbl_803DC6A8;
extern s32 lbl_803DC6AC;

void PlayerIndicator__Update(void) {
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    if ((s32) lbl_803DC6AC != 0) {
        temp_r3 = Game__GetPlayerImpl(lbl_803DC3C0, 0);
        if ((temp_r3 != NULL) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x670) == 0) && ((void *) lbl_803DC6A4 != NULL)) {
            temp_r9 = M2C_FIELD(lbl_803DC6A8, void **, 0x34);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x64)(lbl_803DC6A8 + M2C_FIELD(temp_r9, s16 *, 0x60), 1);
            temp_r9_2 = M2C_FIELD(lbl_803DC6A4, void **, 0x34);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x64)(lbl_803DC6A4 + M2C_FIELD(temp_r9_2, s16 *, 0x60), 0);
            PlayerIndicator__ComputeActorBounds(temp_r3, lbl_803DC6A4);
        }
        temp_r3_2 = Game__GetPlayerImpl(lbl_803DC3C0, 1);
        if ((temp_r3_2 != NULL) && ((s32) M2C_FIELD(temp_r3_2, s32 *, 0x670) == 0) && ((void *) lbl_803DC6A8 != NULL)) {
            temp_r9_3 = M2C_FIELD(lbl_803DC6A4, void **, 0x34);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0x64)(lbl_803DC6A4 + M2C_FIELD(temp_r9_3, s16 *, 0x60), 1);
            temp_r9_4 = M2C_FIELD(lbl_803DC6A8, void **, 0x34);
            M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0x64)(lbl_803DC6A8 + M2C_FIELD(temp_r9_4, s16 *, 0x60), 0);
            PlayerIndicator__ComputeActorBounds(temp_r3_2, lbl_803DC6A8);
        }
    }
}
