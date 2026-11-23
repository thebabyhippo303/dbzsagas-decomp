/* MissionUI__FinalizeCollectedLevelProgress @ 0x8011C818 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int lbl_803DC3C0;
extern int lbl_803DC654;

void MissionUI__CommitCollectedLevelProgress(void);
void SimLoop__PauseSimulation(int loop, int a, int b, int c);
void HUD__ShowAllPlayerWidgets(int hud);

void MissionUI__FinalizeCollectedLevelProgress(void) {
    MissionUI__CommitCollectedLevelProgress();
    SimLoop__PauseSimulation(lbl_803DC3C0, 0, 0, 1);
    HUD__ShowAllPlayerWidgets(lbl_803DC654);
}
