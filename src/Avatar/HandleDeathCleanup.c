/* Avatar__HandleDeathCleanup @ 0x8008DB98 (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Avatar__IsThrownVictim(void *);
void Avatar__SetCoopKnockoutFlag(void *, int);
void Avatar__SetLockActor(void *, void *);
void * Game__GetPlayerImpl(void *, int);
void Missile__DestroyOwnedByActor(void *);
M2C_UNK Avatar__HandleKnockout(void *);             /* extern */
extern void *lbl_803DC3C0;

s32 Avatar__HandleDeathCleanup(void *arg0) {
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    temp_r3 = Game__GetPlayerImpl(lbl_803DC3C0, 0);
    if ((temp_r3 != NULL) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x2B8) == arg0)) {
        Avatar__SetLockActor(temp_r3, NULL);
    }
    temp_r3_2 = Game__GetPlayerImpl(lbl_803DC3C0, 1);
    if ((temp_r3_2 != NULL) && ((s32) M2C_FIELD(temp_r3_2, s32 *, 0x2B8) == arg0)) {
        Avatar__SetLockActor(temp_r3_2, NULL);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x71C) == 4) {
        temp_r31 = M2C_FIELD(arg0, void **, 0x7F8);
        if (Avatar__IsThrownVictim(temp_r31) == 0) {
            temp_r9 = M2C_FIELD(temp_r31, void **, 4);
            temp_r3_3 = M2C_FIELD(temp_r9, void *(**)(void *), 0x54)(temp_r31 + M2C_FIELD(temp_r9, s16 *, 0x50));
            temp_r9_2 = M2C_FIELD(temp_r3_3, void **, 4);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x3C)(temp_r3_3 + M2C_FIELD(temp_r9_2, s16 *, 0x38));
        }
        if (Avatar__IsThrownVictim(temp_r31) == 1) {
            temp_r9_3 = M2C_FIELD(temp_r31, void **, 4);
            temp_r3_4 = M2C_FIELD(temp_r9_3, void *(**)(void *), 0x54)(temp_r31 + M2C_FIELD(temp_r9_3, s16 *, 0x50));
            temp_r9_4 = M2C_FIELD(temp_r3_4, void **, 4);
            M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x3C)(temp_r3_4 + M2C_FIELD(temp_r9_4, s16 *, 0x38));
        }
    }
    Missile__DestroyOwnedByActor(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x7E4) != 0) {
        Avatar__HandleKnockout(arg0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x290) == 0) {
            Avatar__SetCoopKnockoutFlag(arg0, 1);
        }
        return 0;
    }
    return 1;
}

