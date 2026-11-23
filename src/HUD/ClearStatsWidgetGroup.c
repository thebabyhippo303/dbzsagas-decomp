/* HUD__ClearStatsWidgetGroup @ 0x8010D020 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__ClearStatsWidgetGroup @ 0x8010D020 (0x24). ProDG -O2. */
extern void fn_8010BF44(void *hud, void *group);

void HUD__ClearStatsWidgetGroup(char *hud) {
    fn_8010BF44(hud, hud + 0x218C);
}
