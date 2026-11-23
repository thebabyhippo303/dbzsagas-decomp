/* SaveGame__SaveToStorage @ 0x8014F2C0 (size: 0x344, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int Game__GetConfiguredPlayerCount(void *);
void * Game__GetPlayerImpl(void *, int);
u32 Hash__Buffer32(const u8 *, u32, u32);
void PersistentData__AdvanceCurrentLevel(void *, int);
int PersistentData__GetCurrentLevel(void);
void PersistentData__SetPlayerHealth(void *, int, int, int);
void PersistentData__SetPlayerKi(void *, int, int, int);
void PersistentData__SetPlayerSensuBeans(void *, int, int);
void SaveGame__AllocatePayload(void *, int);
void SaveGame__ClearWorkingState(void *);
int SaveGame__GetRecordIndexForLevel(void *, int);
int SaveGame__PrepareActiveRecordData(void *);
void SaveGame__PrepareStorageRecord(void *, s32);
void SaveGame__SetLevelId(void *, int);
void SaveGame__SetPlayerHealthRatio(void *, float);
void * sprintf(s8 *, void *, s8 *, s32);
M2C_UNK SaveGame__CaptureGameState(void *);         /* extern */
extern M2C_UNK lbl_8032C120;
extern f32 lbl_8032C128 __attribute__((section(".data")));
extern M2C_UNK lbl_8035E640 __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DC3C0;
extern void *lbl_803DCC70 __attribute__((section(".data")));

s32 SaveGame__SaveToStorage(void *arg0) {
    f32 ld_28C;
    s16 ld_B8;
    s8 sp8;
    f32 temp_f31;
    s32 temp_r27;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;
    void *temp_r9_2;
    s32 var_r30;
    s32 var_r4;
    void *temp_r3_2;
    void *temp_r30;
    void *temp_r11;
    s32 var_r29;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;

    var_r29 = 0;
    SaveGame__ClearWorkingState(arg0);
    temp_r27 = SaveGame__GetRecordIndexForLevel(arg0, PersistentData__GetCurrentLevel());
    temp_r3 = Game__GetConfiguredPlayerCount(lbl_803DC3C0);
    if (temp_r3 > 0) {
        while (var_r29 < temp_r3) {
            temp_r3_2 = Game__GetPlayerImpl(lbl_803DC3C0, var_r29);
            ld_28C = M2C_FIELD(temp_r3_2, f32 *, 0x28C);
            PersistentData__SetPlayerHealth(lbl_803DC368 + 0x188, var_r29, (s32) M2C_FIELD(temp_r3_2, f32 *, 0x288), (s32) ld_28C);
            PersistentData__SetPlayerKi(lbl_803DC368 + 0x188, var_r29, (s32) M2C_FIELD(temp_r3_2, f32 *, 0x294), (s32) M2C_FIELD(temp_r3_2, f32 *, 0x298));
            temp_r4 = var_r29;
            var_r29 += 1;
            PersistentData__SetPlayerSensuBeans(lbl_803DC368 + 0x188, temp_r4, M2C_FIELD(temp_r3_2, s32 *, 0x290));
        }
    }
    temp_r3 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
    if (temp_r3 == 0x1B) {
        PersistentData__AdvanceCurrentLevel(lbl_803DC368 + 0x17D, temp_r27);
    } else {
        var_r4 = temp_r3 + 1;
        if (temp_r3 == 8) {
            var_r4 = 0xA;
        }
        PersistentData__AdvanceCurrentLevel(lbl_803DC368 + 0x17D, var_r4);
    }
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, u8 **, 0x30) + (temp_r27 * 0xA0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x50) == 0) {
        temp_r4_2 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
        if (temp_r4_2 == 0x1B) {
            SaveGame__SetLevelId(arg0, temp_r27);
        } else {
            SaveGame__SetLevelId(arg0, temp_r4_2);
        }
    }
    temp_r30 = Game__GetPlayerImpl(lbl_803DC3C0, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x54) != 0) {
        temp_f31 = M2C_FIELD(temp_r30, f32 *, 0x118);
        M2C_FIELD(temp_r30, f32 *, 0x118) = (f32) lbl_8032C128;
        SaveGame__SetPlayerHealthRatio(arg0, M2C_FIELD(temp_r30, f32 *, 0x288) / M2C_FIELD(temp_r30, f32 *, 0x28C));
        SaveGame__AllocatePayload(arg0, SaveGame__PrepareActiveRecordData(arg0));
        SaveGame__CaptureGameState(arg0);
        SaveGame__PrepareStorageRecord(arg0, 1);
        M2C_FIELD(temp_r30, f32 *, 0x118) = temp_f31;
    } else {
        M2C_FIELD(arg0, u8 **, 0x1C) = (u8 *) M2C_FIELD(arg0, u8 **, 0x34);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), u32 *, 0) = Hash__Buffer32(M2C_FIELD(arg0, u8 **, 0x30), 0x140U, 0U);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), u32 *, 4) = Hash__Buffer32(M2C_FIELD(arg0, u8 **, 0x34), 0x2400U, 0U);
    temp_r11 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
    var_r30 = M2C_FIELD(temp_r11, s32 (**)(void *, s32), 0x9C)(lbl_803DCC70 + M2C_FIELD(temp_r11, s16 *, 0x98), M2C_FIELD(arg0, s32 *, 0x28));
    if (var_r30 == 0) {
        temp_r9_2 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
        var_r30 = M2C_FIELD(temp_r9_2, s32 (**)(void *, M2C_UNK), 0x14)(lbl_803DCC70 + M2C_FIELD(temp_r9_2, s16 *, 0x10), 0);
        temp_r9_3 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0x1C)(lbl_803DCC70 + M2C_FIELD(temp_r9_3, s16 *, 0x18), 0);
        if (var_r30 == 0) {
            sprintf(&sp8, &lbl_8032C120, (M2C_FIELD(arg0, s32 *, 0x48) + 1), *(&lbl_8035E640 + 4 + (PersistentData__GetCurrentLevel() << 5)));
            temp_r9_4 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
            ld_B8 = M2C_FIELD(temp_r9_4, s16 *, 0xB8);
            var_r30 = M2C_FIELD(temp_r9_4, s32 (**)(void *, s8 *), 0xBC)(lbl_803DCC70 + ld_B8, &sp8);
            if (var_r30 == 0) {
                temp_r9_5 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
                var_r30 = M2C_FIELD(temp_r9_5, s32 (**)(void *, void *, M2C_UNK), 0x74)(lbl_803DCC70 + M2C_FIELD(temp_r9_5, s16 *, 0x70), M2C_FIELD(arg0, void **, 0x40), 0x2410);
            }
        }
        SaveGame__ClearWorkingState(arg0);
    }
    return var_r30;
}
