/* MissionUI__CommitCollectedLevelProgress @ 0x8011C43C (size: 0x2D4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ConfirmationDialog__Hide(void *);
void PersistentData__MarkPickupCollectedForLevel(void *, s32, s32, s32);
s32 PersistentData__GetGreenCapsules(s32);
s32 PersistentData__SetGreenCapsules(void *, s32);
s32 PersistentData__GetBlueCapsules(s32);
s32 PersistentData__SetBlueCapsules(void *, s32);
s32 PersistentData__SetCoinsAvailable(void *, s32);
void Game__RequestPostMissionTransition(void *);
void Game__QuitGameImpl(void *);
void Game__RefreshPlayerRecordEffects(void *);
void PersistentData__SetRecordStatusById(void *, s32, s32);
void fn_80267318(void *, int, float);
extern f32 lbl_803271A8 __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DC3C0;

void MissionUI__CommitCollectedLevelProgress(void *arg0) {
    s32 temp_r28;
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r4;
    s32 temp_r9_10;
    s32 var_r30;
    s32 var_r31;
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;

    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3A0)) != 0) {
        temp_r10 = M2C_FIELD(arg0, void **, 0xAE94);
        temp_r11 = M2C_FIELD(temp_r10, void **, 0x19C);
        if (M2C_FIELD(temp_r11, s32 (**)(void *), 0x38C)(temp_r10 + M2C_FIELD(temp_r11, s16 *, 0x388)) != 0) {
            temp_r11_2 = M2C_FIELD(arg0, void **, 0xAE94);
            temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
            temp_r3 = M2C_FIELD(temp_r9_2, void *(**)(void *), 0x38C)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x388));
            temp_r9_3 = M2C_FIELD(temp_r3, void **, 8);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x1C)(temp_r3 + M2C_FIELD(temp_r9_3, s16 *, 0x18));
        }
        temp_r3_2 = M2C_FIELD(arg0, void **, 0xAE94);
        temp_r9_4 = M2C_FIELD(temp_r3_2, void **, 0x19C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x3C)(temp_r3_2 + M2C_FIELD(temp_r9_4, s16 *, 0x38));
        temp_r11_3 = M2C_FIELD(arg0, void **, 0xAE98);
        if (temp_r11_3 != NULL) {
            temp_r9_5 = M2C_FIELD(temp_r11_3, void **, 0x19C);
            if (M2C_FIELD(temp_r9_5, s32 (**)(void *), 0x38C)(temp_r11_3 + M2C_FIELD(temp_r9_5, s16 *, 0x388)) != 0) {
                temp_r11_4 = M2C_FIELD(arg0, void **, 0xAE98);
                temp_r9_6 = M2C_FIELD(temp_r11_4, void **, 0x19C);
                temp_r3_3 = M2C_FIELD(temp_r9_6, void *(**)(void *), 0x38C)(temp_r11_4 + M2C_FIELD(temp_r9_6, s16 *, 0x388));
                temp_r9_7 = M2C_FIELD(temp_r3_3, void **, 8);
                M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *), 0x1C)(temp_r3_3 + M2C_FIELD(temp_r9_7, s16 *, 0x18));
            }
            temp_r3_4 = M2C_FIELD(arg0, void **, 0xAE98);
            temp_r9_8 = M2C_FIELD(temp_r3_4, void **, 0x19C);
            M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *), 0x3C)(temp_r3_4 + M2C_FIELD(temp_r9_8, s16 *, 0x38));
        }
        temp_r3_5 = M2C_FIELD(arg0, void **, 0xAEA8);
        temp_r28 = M2C_FIELD(temp_r3_5, s32 *, 0x11CC);
        ConfirmationDialog__Hide(temp_r3_5);
        fn_80267318(arg0, 0, lbl_803271A8);
        temp_r9_9 = M2C_FIELD(arg0, void **, 0x19C);
        M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *), 0x1E4)(arg0 + M2C_FIELD(temp_r9_9, s16 *, 0x1E0));
        temp_r4 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
        if (temp_r4 != 1) {
            var_r31 = 0;
            PersistentData__MarkPickupCollectedForLevel(lbl_803DC368 + 0x18C, temp_r4, 8, M2C_FIELD(lbl_803DC3C0, s32 *, 0x3C));
            PersistentData__MarkPickupCollectedForLevel(lbl_803DC368 + 0x18C, M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4), 9, M2C_FIELD(lbl_803DC3C0, s32 *, 0x44));
            PersistentData__MarkPickupCollectedForLevel(lbl_803DC368 + 0x18C, M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4), 0xA, M2C_FIELD(lbl_803DC3C0, s32 *, 0x48));
            temp_r29 = lbl_803DC3C0;
            temp_r30 = lbl_803DC368 + 0x174;
            PersistentData__SetGreenCapsules((void *) temp_r30, M2C_FIELD(temp_r29, s32 *, 0x4C) - PersistentData__GetGreenCapsules(temp_r30));
            temp_r29_2 = lbl_803DC3C0;
            temp_r30_2 = lbl_803DC368 + 0x174;
            PersistentData__SetBlueCapsules((void *) temp_r30_2, M2C_FIELD(temp_r29_2, s32 *, 0x50) - PersistentData__GetBlueCapsules(temp_r30_2));
            PersistentData__SetCoinsAvailable(lbl_803DC368 + 0x168, M2C_FIELD(lbl_803DC3C0, s32 *, 0x40));
            if (var_r31 < (s32) M2C_FIELD(lbl_803DC3C0, s32 *, 0x58)) {
                var_r30 = 0;
                do {
                    temp_r9_10 = M2C_FIELD(lbl_803DC3C0, s32 *, 0x54);
                    if ((s32) M2C_FIELD((temp_r9_10 + var_r30), s32 *, 4) != 0) {
                        PersistentData__SetRecordStatusById(lbl_803DC368 + 0x138, *(s32 *)(temp_r9_10 + var_r30), 1);
                    } else {
                        PersistentData__SetRecordStatusById(lbl_803DC368 + 0x138, *(s32 *)(temp_r9_10 + var_r30), 0);
                    }
                    var_r31 += 1;
                    var_r30 += 8;
                } while (var_r31 < (s32) M2C_FIELD(lbl_803DC3C0, s32 *, 0x58));
            }
            Game__RefreshPlayerRecordEffects(lbl_803DC3C0);
        }
        if (temp_r28 != 0) {
            Game__RequestPostMissionTransition(lbl_803DC3C0);
            return;
        }
        Game__QuitGameImpl(lbl_803DC3C0);
    }
}
