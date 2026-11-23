/* MainMenu__AreCharacterSelectionsEquivalent @ 0x80145E4C (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int lbl_8035ED94[] __attribute__((section(".data")));

int MainMenu__AreCharacterSelectionsEquivalent(void *menu, int a, int b) {
    return lbl_8035ED94[a] == lbl_8035ED94[b];
}
