/* MainMenu__ApplySaveConfirmationChoice @ 0x8014BEB4 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MainMenu__ApplySaveConfirmationChoice @ 0x8014BEB4 (0x90). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Game__TriggerMenuFade(void *);
void SimLoop__PauseSimulation(int, int, int, int);
void MainMenu__ResetSaveConfirmationState(void *);
extern void *lbl_803DC3C0;

void MainMenu__ApplySaveConfirmationChoice(void *arg0) {
    s32 temp_r0;
    void *temp_r9;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xCBAC) == 2) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xC060);
        switch (temp_r0) {
        case 1:
            MainMenu__ResetSaveConfirmationState(arg0);
            temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x38));
            Game__TriggerMenuFade(lbl_803DC3C0);
            return;
        case 0:
            SimLoop__PauseSimulation((s32) lbl_803DC3C0, 0, 0, 0);
            MainMenu__ResetSaveConfirmationState(arg0);
            break;
        }
    }
}
