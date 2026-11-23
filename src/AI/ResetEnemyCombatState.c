/* AI__ResetEnemyCombatState @ 0x800745E4 (size: 0x134, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__SetState(void *, int);
void AI__UpdateHealthThresholdReaction(void *);
extern f32 lbl_8031EFBC __attribute__((section(".data")));

void AI__ResetEnemyCombatState(void *arg0) {
    s32 temp_r0;
    void *temp_r9_4;
    void *temp_r9_3;
    void *temp_r9_5;
    register void *temp_r9;
    void *temp_r11;
    register void *temp_r9_2;
    s32 temp_r0_2;

    AI__UpdateHealthThresholdReaction(arg0);
    temp_r9 = M2C_FIELD(arg0, void **, 0x57C);
    M2C_FIELD(arg0, s32 *, 0x58C) = 0;
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x5C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x58), 0);
    AI__SetState(arg0, 3);
    M2C_FIELD(arg0, f32 *, 0x540) = (f32) lbl_8031EFBC;
    M2C_FIELD(arg0, s32 *, 0x590) = 0;
    M2C_FIELD(arg0, s32 *, 0x584) = 3;
    M2C_FIELD(arg0, s32 *, 0x594) = 0;
    M2C_FIELD(arg0, s32 *, 0x598) = 0;
    M2C_FIELD(arg0, s32 *, 0x5AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x5BC) = 0;
    temp_r11 = M2C_FIELD(arg0, void **, 0x390);
    temp_r0_2 = M2C_FIELD(temp_r11, s32 *, 0xB8C);
    M2C_FIELD(arg0, s32 *, 0x5A8) = 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r0_2;
    temp_r0 = M2C_FIELD(M2C_FIELD(temp_r11, void **, 0x19D8), s32 *, 0xC);
    if (temp_r0 == 0x21) {
        temp_r9_2 = M2C_FIELD(arg0, void **, 0x57C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x6C)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x68), 0xC);
        temp_r9_3 = M2C_FIELD(arg0, void **, 0x57C);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0x5C)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x58), 1);
    } else if (temp_r0 == 0x1B) {
        temp_r9_4 = M2C_FIELD(arg0, void **, 0x57C);
        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0x6C)(arg0 + M2C_FIELD(temp_r9_4, s16 *, 0x68), 0xB);
        temp_r9_5 = M2C_FIELD(arg0, void **, 0x57C);
        M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, M2C_UNK), 0x5C)(arg0 + M2C_FIELD(temp_r9_5, s16 *, 0x58), 0);
    }
    M2C_FIELD(arg0, s32 *, 0x5B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x5B0) = 0x86;
}
