/* Game__FadeIn @ 0x8002F56C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC368;
extern char lbl_803116C8[];
int PersistentData__GetGlobalImpl(void *p, char *key);
void Fade__StartInPreset(int preset, int a, int b);

void Game__FadeIn(void) {
    int preset = PersistentData__GetGlobalImpl(lbl_803DC368 + 300, lbl_803116C8);
    Fade__StartInPreset(preset, 0, 0);
}
