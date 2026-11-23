/* MainMenu__UpdateLetterAnimation @ 0x8012F8E8 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MainMenu__UpdateLetterAnimation @ 0x8012F8E8 (0x68). ProDG -O2. */
typedef struct MainMenu {
    char pad[2536];
    int letter_state;
} MainMenu;

extern void MainMenu__UpdateLetterAnimationPhaseOne(MainMenu *menu);
extern void MainMenu__UpdateLetterAnimationPhaseTwo(MainMenu *menu);
extern void fn_8026BF14(MainMenu *menu);

void MainMenu__UpdateLetterAnimation(MainMenu *menu) {
    switch (menu->letter_state) {
    case 0:
        MainMenu__UpdateLetterAnimationPhaseOne(menu);
        break;
    case 1:
        MainMenu__UpdateLetterAnimationPhaseTwo(menu);
        break;
    default:
        menu->letter_state = 0;
        break;
    }
    fn_8026BF14(menu);
}
