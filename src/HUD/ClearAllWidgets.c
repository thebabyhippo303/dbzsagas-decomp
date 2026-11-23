/* HUD__ClearAllWidgets @ 0x8010C610 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void HUD__DestroyWidgetGroups(void *hud, void *group);
extern void HUD__DestroyTrackedWidget(void *hud);
extern void CombatHUD__ClearComboBreakerText(void *hud);
extern void HUD__ClearHourglassTimerWidgets(void *hud);
extern void MenuInput__DestroyWeaponActionPromptWidgets(void *hud);
extern void InventoryMenu__DestroyWidgetGroups(void *hud);
extern void MenuInput__DestroyWeaponPromptVisuals(void *hud);
extern void HUD__ClearWidgetCollections(void *hud);

void HUD__ClearAllWidgets(int *hud) {
    char *group;
    int left;

    if (*hud != 0) {
        *hud = 0;
        group = (char *)hud + 4712;
        left = 2;
        do {
            HUD__DestroyWidgetGroups(hud, group);
            group += 1292;
            left -= 1;
        } while (left != 0);
        HUD__DestroyTrackedWidget(hud);
        CombatHUD__ClearComboBreakerText(hud);
        HUD__ClearHourglassTimerWidgets(hud);
        MenuInput__DestroyWeaponActionPromptWidgets(hud);
        InventoryMenu__DestroyWidgetGroups(hud);
        MenuInput__DestroyWeaponPromptVisuals(hud);
        HUD__ClearWidgetCollections(hud);
    }
}
