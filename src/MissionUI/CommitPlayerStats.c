/* MissionUI__CommitPlayerStats @ 0x80123D88 (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

extern void *lbl_803DC3C0;
extern char *lbl_803DC368;
extern s32 lbl_803DC6C4;
extern s32 lbl_803DC654;
extern s32 lbl_803DC714;

int Game__GetConfiguredPlayerCount(void *game);
void *Game__GetPlayerImpl(void *game, int index);
void PersistentData__SetPlayerHealth(void *data, int index, int cur, int max);
void PersistentData__SetPlayerKi(void *data, int index, int cur, int max);
void PersistentData__SetPlayerSensuBeans(void *data, int index, int count);
void MissionUI__ShowStatsSummary(s32 ui);
void SimLoop__PauseSimulation(void *loop, int a, int b, int c);
void HUD__ShowAllPlayerWidgets(s32 hud);
int Game__IsPendulumModeImpl(void *game);
void MainMenu__ShowSaveGameConfirmation(s32 menu);
void Game__QuitGameImpl(void *game);

void MissionUI__CommitPlayerStats(void) {
    s32 count;
    s32 i;
    void *player;

    i = 0;
    count = Game__GetConfiguredPlayerCount(lbl_803DC3C0);
    while (i < count) {
        player = Game__GetPlayerImpl(lbl_803DC3C0, i);
        PersistentData__SetPlayerHealth(
            lbl_803DC368 + 0x188,
            i,
            (s32) *(f32 *)((char *)player + 0x288),
            (s32) *(f32 *)((char *)player + 0x28C));
        PersistentData__SetPlayerKi(
            lbl_803DC368 + 0x188,
            i,
            (s32) *(f32 *)((char *)player + 0x294),
            (s32) *(f32 *)((char *)player + 0x298));
        PersistentData__SetPlayerSensuBeans(
            lbl_803DC368 + 0x188, i, *(s32 *)((char *)player + 0x290));
        i += 1;
    }
    MissionUI__ShowStatsSummary(lbl_803DC6C4);
    if (*(s32 *)((char *)*(void **)((char *)lbl_803DC3C0 + 0x238) + 4) == 1) {
        SimLoop__PauseSimulation(lbl_803DC3C0, 0, 0, 1);
        HUD__ShowAllPlayerWidgets(lbl_803DC654);
        return;
    }
    if (Game__IsPendulumModeImpl(lbl_803DC368 + 0x17C) == 0) {
        MainMenu__ShowSaveGameConfirmation(lbl_803DC714);
        return;
    }
    SimLoop__PauseSimulation(lbl_803DC3C0, 0, 0, 1);
    Game__QuitGameImpl(lbl_803DC3C0);
}
