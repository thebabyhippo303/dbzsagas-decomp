/* SaveMenu__ReturnToMainMenu @ 0x8005508C (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;

void fn_80184B70(void *self, void *arg1, f32 value);
void MainMenu__StartScreenTransition(void *menu, f32 value);
int Options__WasDifficultyQuestionAsked(void *options);
void MainMenu__ConfigureScreen(void *menu, int screen);
void fn_80184B30(int mode);
void fn_80267318(void *obj, int mode, f32 value);

extern f32 lbl_8031A74C __attribute__((section(".data")));
extern f32 lbl_8031A750 __attribute__((section(".data")));
extern void *lbl_803DC704;
extern void *lbl_803DCC60;
extern void *lbl_803DC368;

void SaveMenu__ReturnToMainMenu(void *self, void *arg1) {
    void *pool;
    f32 *fade_ptr;

    pool = lbl_803DCC60;
    fade_ptr = &lbl_8031A74C;
    *(int *)((char *)self + 0x1A0) = 1;
    *(int *)((char *)pool + 8) = 0;
    fn_80184B70(self, arg1, *fade_ptr);
    MainMenu__StartScreenTransition(lbl_803DC704, lbl_8031A750);
    if (Options__WasDifficultyQuestionAsked((char *)lbl_803DC368 + 880) != 0) {
        MainMenu__ConfigureScreen(lbl_803DC704, 3);
    } else {
        MainMenu__ConfigureScreen(lbl_803DC704, 35);
    }
    fn_80184B30(1);
    fn_80267318((char *)self + 0xD4C4, 0, lbl_8031A750);
    fn_80267318((char *)self + 0x3DA28, 0, lbl_8031A750);
    fn_80267318((char *)self + 0x1A4, 0, lbl_8031A750);
    *(int *)((char *)self + 0x4914C) = 1;
}
