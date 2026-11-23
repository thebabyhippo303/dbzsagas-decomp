/* HUD__DeleteBossStatBar @ 0x8010CFFC (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void HUD__DestroyWidgetGroups(void *hud, void *group);

void HUD__DeleteBossStatBar(void *hud) {
    HUD__DestroyWidgetGroups(hud, (char *)hud + 7296);
}
