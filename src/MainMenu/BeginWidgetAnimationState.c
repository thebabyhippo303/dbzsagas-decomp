/* MainMenu__BeginWidgetAnimationState @ 0x8013027C (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match MainMenu__BeginWidgetAnimationState @ 0x8013027C (0x34). */
extern void MainMenu__InitializeWidgetAnimationPositions(void *self);

void MainMenu__BeginWidgetAnimationState(void *self) {
    MainMenu__InitializeWidgetAnimationPositions(self);
    *(int *)((char *)self + 2624) = 1;
}
