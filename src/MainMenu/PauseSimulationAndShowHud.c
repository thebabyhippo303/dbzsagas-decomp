/* MainMenu__PauseSimulationAndShowHud @ 0x8014B7BC (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int lbl_803DC3C0;
extern int lbl_803DC654;
extern int lbl_803DC710;

void fn_8014B728(int menu);
void SimLoop__PauseSimulation(int loop, int a, int b, int c);
void HUD__ShowAllPlayerWidgets(int hud);

void MainMenu__PauseSimulationAndShowHud(void) {
    fn_8014B728(lbl_803DC710);
    SimLoop__PauseSimulation(lbl_803DC3C0, 0, 0, 1);
    HUD__ShowAllPlayerWidgets(lbl_803DC654);
}
