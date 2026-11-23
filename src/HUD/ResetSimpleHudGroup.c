/* HUD__ResetSimpleHudGroup @ 0x8010D2BC (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
void HUD__ResetWidgetGroupStorage(void *hud, void *group);

void HUD__ResetSimpleHudGroup(void *hud, char *group) {
    HUD__ResetWidgetGroupStorage(hud, group + 4);
}
