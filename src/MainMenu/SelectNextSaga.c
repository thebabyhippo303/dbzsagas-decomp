/* MainMenu__SelectNextSaga @ 0x80140B7C (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
void UIList__SetSelectedIndex(void *list, int index);
void UI__SetColorRGBA(void *, double, float, float, double);
void fn_8026B420(void *obj);
void MainMenu__ConfigureSagaSelection(void *menu, int index);

extern float lbl_8032B968 __attribute__((section(".data")));
extern float lbl_8032B96C __attribute__((section(".data")));

void MainMenu__SelectNextSaga(void *menu) {
    char *base = menu;
    char *hi;
    int index;
    int i;
    void **cursor;
    void *widget;
    short adjust;
    void (*draw)(void *, float, double, double, float);

    index = *(int *)(base + 0x22354) + 1;
    if (index > 6) {
        *(int *)(base + 0x22354) = 6;
        return;
    }
    *(int *)(base + 0x22354) = index;
    MainMenu__ConfigureSagaSelection(base, index);
    hi = base + 0x10000;
    UIList__SetSelectedIndex(hi + 25860, 0);
    i = 7;
    UI__SetColorRGBA(hi - 15592, lbl_8032B968, lbl_8032B968, lbl_8032B968, lbl_8032B96C);
    widget = *(void **)(hi + 23360);
    cursor = (void **)(hi + 23304);
    hi += 22948;
    adjust = *(short *)((char *)widget + 0x130);
    draw = *(void (**)(void *, float, double, double, float))((char *)widget + 0x134);
    draw(hi + adjust, lbl_8032B968, lbl_8032B968, lbl_8032B968, lbl_8032B96C);
    do {
        fn_8026B420(*cursor);
        cursor = (void **)((char *)cursor + 0x1A0);
        i--;
    } while (i != 0);
}
