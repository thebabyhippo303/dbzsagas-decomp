/* MainMenu__ResetPlayerSelectState @ 0x80012360 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MainMenu__ResetPlayerSelectState @ 0x80012360 (0x24). */
extern void MainMenu__SetPlayerSelectState(void *menu, int state);

void MainMenu__ResetPlayerSelectState(void *menu) {
    MainMenu__SetPlayerSelectState(menu, 0);
}
