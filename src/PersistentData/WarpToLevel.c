/* PersistentData__WarpToLevel @ 0x8012633C (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * PersistentData__FindFirstRecord(void *, void *, void *, void *, void *, void *);
void PersistentData__SetValue(void *, void *, char *, s32, s32);
void Game__PlacePlayerAvatar(s32, s32);
void SaveGame__SelectLevelRecord(void *, s32);
void Game__RequestLevelTransition(void *, s32, s32);
M2C_UNK Game__StartAudioFade(s32, s32, f32);
extern M2C_UNK lbl_8032762C __attribute__((section(".data")));
extern f32 lbl_80327634 __attribute__((section(".data")));
extern void *lbl_803DC368;
extern void *lbl_803DC3C0;

void PersistentData__WarpToLevel(void *arg0, void *arg1, s8 *arg2, s32 arg3) {
    s32 temp_r4;
    void *temp_r3;

    temp_r3 = PersistentData__FindFirstRecord(arg0, &lbl_8032762C, arg2, arg1, NULL, (void *)7);
    M2C_FIELD(arg0, void **, 0x248) = temp_r3;
    if (temp_r3 == NULL) {
        PersistentData__SetValue(lbl_803DC368 + 0x12C, &lbl_8032762C, arg2, (s32) arg1, arg3);
        M2C_FIELD(arg0, void **, 0x248) = PersistentData__FindFirstRecord(arg0, &lbl_8032762C, arg2, arg1, NULL, (void *)7);
    }
    temp_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x248), s32 *, 0x38);
    if (temp_r4 == (s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4)) {
        Game__PlacePlayerAvatar((s32) lbl_803DC3C0, 0);
        return;
    }
    SaveGame__SelectLevelRecord(M2C_FIELD(lbl_803DC368, void **, 0x5388), temp_r4);
    Game__StartAudioFade((s32) lbl_803DC3C0, 1, lbl_80327634);
    Game__RequestLevelTransition(lbl_803DC3C0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x248), s32 *, 0x38), 0);
}

