/* Game__ShowStats @ 0x8002EFCC (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void HUD__ClearStatsWidgetGroup(char *);
void HUD__DeleteBossStatBar(void *);
void SimLoop__PauseSimulation(int, int, int, int);
M2C_UNK HUD__ClearAllWidgets(s8 *);                 /* extern */
M2C_UNK HUD__HideAllPlayerWidgets(s8 *);            /* extern */
M2C_UNK HUD__UpdateStatsOverlay(s32, f32);          /* extern */
M2C_UNK MissionUI__InitializeStatsSummaryScreen(s32); /* extern */
extern f32 lbl_803116A8 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern s8 *lbl_803DC654;
extern s32 lbl_803DC6C4;

void Game__ShowStats(void) {
    if ((u32) (M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) - 2) <= 0x13U) {
        HUD__HideAllPlayerWidgets(lbl_803DC654);
        MissionUI__InitializeStatsSummaryScreen(lbl_803DC6C4);
        SimLoop__PauseSimulation((s32) lbl_803DC3C0, 1, 0, 1);
        HUD__ClearAllWidgets(lbl_803DC654);
        HUD__DeleteBossStatBar(lbl_803DC654);
        HUD__ClearStatsWidgetGroup(lbl_803DC654);
        HUD__UpdateStatsOverlay(lbl_803DC6C4, lbl_803116A8);
    }
}

