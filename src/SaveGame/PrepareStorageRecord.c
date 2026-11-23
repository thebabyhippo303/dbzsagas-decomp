/* SaveGame__PrepareStorageRecord @ 0x8014EC50 (size: 0x198, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SaveGame__CompressActiveRecord(void *, int);
void Sound__ResetVoiceOverPlayCounts(void *, int);
void fn_80255AE0(int, void *);
extern M2C_UNK lbl_803946C4 __attribute__((section(".data")));
extern s32 lbl_803946C8 __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DC3C0;
extern void *lbl_803DCC70;

void SaveGame__PrepareStorageRecord(void *arg0, s32 arg1) {
    s32 (*temp_r9_3)(void *, M2C_UNK);
    s32 temp_r28;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r26;
    void *temp_r27;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r4;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;

    temp_r26 = M2C_FIELD(arg0, void **, 0x20);
    temp_r28 = M2C_FIELD(&lbl_803946C4, s32 *, 4);
    temp_r27 = M2C_FIELD(arg0, void **, 0x18);
    M2C_FIELD(&lbl_803946C4, s32 *, 4) = 0x62;
    temp_r9 = M2C_FIELD(arg0, s32 *, 0x30) + 0xA0;
    M2C_FIELD(arg0, void **, 0x20) = temp_r9;
    M2C_FIELD(temp_r9, s32 *, 0x3C) = (s32) M2C_FIELD(&lbl_803946C4, s32 *, 4);
    if (arg1 != 0) {
        temp_r3 = lbl_803DC368 + 0x12C;
        temp_r9_2 = M2C_FIELD(temp_r3, void **, 0x5254);
        temp_r9_3 = M2C_FIELD(temp_r9_2, s32 (**)(void *, M2C_UNK), 0xC);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 4) = temp_r9_3(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 8), temp_r9_3);
        temp_r11 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
        temp_r3_2 = M2C_FIELD(temp_r11, void *(**)(void *, s32), 0xA4)(lbl_803DCC70 + M2C_FIELD(temp_r11, s16 *, 0xA0), M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 4));
        M2C_FIELD(arg0, void **, 0x18) = temp_r3_2;
        temp_r3_3 = lbl_803DC368 + 0x12C;
        temp_r9_4 = M2C_FIELD(temp_r3_3, void **, 0x5254);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, void *, s32), 0x14)(temp_r3_3 + M2C_FIELD(temp_r9_4, s16 *, 0x10), temp_r3_2, arg1);
        SaveGame__CompressActiveRecord(arg0, M2C_FIELD(&lbl_803946C4, s32 *, 4));
    } else {
        temp_r9_5 = M2C_FIELD(arg0, void **, 0x20);
        temp_r11_2 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
        temp_r3_4 = M2C_FIELD(temp_r11_2, void *(**)(void *, s32, void *, void *), 0xA4)(lbl_803DCC70 + M2C_FIELD(temp_r11_2, s16 *, 0xA0), M2C_FIELD(temp_r9_5, s32 *, 4), temp_r9_5, lbl_803DCC70);
        M2C_FIELD(arg0, void **, 0x18) = temp_r3_4;
        fn_80255AE0(M2C_FIELD(arg0, s32 *, 0x34) + M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 0x58), temp_r3_4);
        temp_r4 = M2C_ERROR(/* Read from unset register $r3 */);
        M2C_FIELD(arg0, void **, 0x18) = temp_r4;
        temp_r3_5 = lbl_803DC368 + 0x12C;
        temp_r9_6 = M2C_FIELD(temp_r3_5, void **, 0x5254);
        M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, void *, M2C_UNK), 0x14)(temp_r3_5 + M2C_FIELD(temp_r9_6, s16 *, 0x10), temp_r4, 0);
    }
    if (arg1 == 0) {
        Sound__ResetVoiceOverPlayCounts(lbl_803DC3C0, 0x300);
    }
    temp_r9_7 = M2C_FIELD(lbl_803DCC70, void **, 0xC);
    M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, void *), 0xAC)(lbl_803DCC70 + M2C_FIELD(temp_r9_7, s16 *, 0xA8), M2C_FIELD(arg0, void **, 0x18));
    lbl_803946C8 = temp_r28;
    M2C_FIELD(arg0, void **, 0x20) = temp_r26;
    M2C_FIELD(arg0, void **, 0x18) = temp_r27;
}
