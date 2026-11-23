/* HUD__Update @ 0x8010C1A4 (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__Update @ 0x8010C1A4 (0x108). ProDG -O2. */
void *Game__GetPlayerImpl(void *game, int index);
void HUD__UpdatePlayerWidgetGroups(void *hud, void *group);
void HUD__UpdateTrackedWidgetTransition(void *hud);
void CombatHUD__UpdateComboBreakerDisplayTimer(void *hud);
void HUD__UpdateHourglassTimer(void *hud);
void MenuInput__UpdateNavigation(void *hud);
void CombatHUD__UpdateComboDisplay(void *hud);
void MenuInput__ProcessSelectionActions(void *hud);
void InventoryMenu__Initialize(void *hud);
void fn_80105574(void *hud);
void MenuInput__InitializeWeaponActionPrompts(void *hud);
void HUD__UpdatePlayerTrackingOffsets(void *hud);
void HUD__RebuildTrackedWidgetCollections(void *hud);
int ProtectMeter__ShouldUpdateWidgets(void *meter);
void ProtectMeter__UpdateWidgets(void *meter);
void ProtectMeter__HideDisplayWidgetsIfActive(void *meter);
void Minimap__UpdateDisplay(void);
void LetterBox__Update(void);
void PlayerIndicator__Update(void);
void ProgressArrow__Update(void);
void HUD__UpdateBossStatBars(void);
void CombatHUD__UpdateAttemptBreaker(void *hud);

extern void *lbl_803DC3C0 __attribute__((section(".sdata")));
extern void *lbl_803DC6B4 __attribute__((section(".sdata")));

void HUD__Update(void *hud, int playerCount) {
    int index;
    char *group;

    index = 0;
    if (index < playerCount) {
        group = (char *)hud + 4712;
        do {
            if (Game__GetPlayerImpl(lbl_803DC3C0, index) != 0) {
                HUD__UpdatePlayerWidgetGroups(hud, group);
            }
            index += 1;
            group += 1292;
        } while (index < playerCount);
    }
    HUD__UpdateTrackedWidgetTransition(hud);
    CombatHUD__UpdateComboBreakerDisplayTimer(hud);
    HUD__UpdateHourglassTimer(hud);
    MenuInput__UpdateNavigation(hud);
    CombatHUD__UpdateComboDisplay(hud);
    MenuInput__ProcessSelectionActions(hud);
    InventoryMenu__Initialize(hud);
    fn_80105574(hud);
    MenuInput__InitializeWeaponActionPrompts(hud);
    HUD__UpdatePlayerTrackingOffsets(hud);
    HUD__RebuildTrackedWidgetCollections(hud);
    if (lbl_803DC6B4 != 0) {
        if (ProtectMeter__ShouldUpdateWidgets(lbl_803DC6B4) != 0) {
            ProtectMeter__UpdateWidgets(lbl_803DC6B4);
        }
        ProtectMeter__HideDisplayWidgetsIfActive(lbl_803DC6B4);
    }
    Minimap__UpdateDisplay();
    LetterBox__Update();
    PlayerIndicator__Update();
    ProgressArrow__Update();
    HUD__UpdateBossStatBars();
    CombatHUD__UpdateAttemptBreaker(hud);
}
