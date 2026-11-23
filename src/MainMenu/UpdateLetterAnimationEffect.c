/* MainMenu__UpdateLetterAnimationEffect @ 0x80113F58 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MainMenu__UpdateLetterAnimationEffect @ 0x80113F58 (0x90). ProDG -O2. */
void fn_80113FE8();
void fn_801141CC();
void fn_80114770();
void MainMenu__UpdateLetterAnimationChild();
void fn_80114E04();
void fn_80115210();
void fn_80115638();

void MainMenu__UpdateLetterAnimationEffect(void *arg0) {
    switch (*(int *)((char *)arg0 + 0x3C4)) {
    case 0:
        fn_80113FE8();
        return;
    case 1:
        fn_801141CC();
        return;
    case 2:
        fn_80114770();
        return;
    case 3:
        MainMenu__UpdateLetterAnimationChild();
        return;
    case 4:
        fn_80114E04();
        return;
    case 5:
        fn_80115210();
        return;
    case 6:
        fn_80115638();
        return;
    }
}
