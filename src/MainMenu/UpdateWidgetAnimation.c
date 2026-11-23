/* MainMenu__UpdateWidgetAnimation @ 0x801302C8 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MainMenu__UpdateWidgetAnimation @ 0x801302C8 (0x64). ProDG -O2. */
void fn_8026BF14(void *);
void MainMenu__AdvanceWidgetAnimationFromStateOne(void *);
void MainMenu__ResetWidgetAnimation(void *);

void MainMenu__UpdateWidgetAnimation(void *self) {
    fn_8026BF14(self);
    switch (*(int *)((char *)self + 0xA40)) {
    case 0:
        break;
    case 1:
        MainMenu__AdvanceWidgetAnimationFromStateOne(self);
        break;
    case 2:
        break;
    case 3:
        MainMenu__ResetWidgetAnimation(self);
        break;
    }
}
