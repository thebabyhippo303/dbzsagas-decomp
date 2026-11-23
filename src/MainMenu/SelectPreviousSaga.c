/* MainMenu__SelectPreviousSaga @ 0x80140C4C (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef float f32;

void UIList__SetSelectedIndex(void *list, int index);
void UI__SetColorRGBA(void *, double, float, float, double);
void fn_8026B420(void *obj);
void MainMenu__ConfigureSagaSelection(void *menu, s32 index);

extern f32 lbl_8032B970 __attribute__((section(".data")));
extern f32 lbl_8032B974 __attribute__((section(".data")));

void MainMenu__SelectPreviousSaga(void *menu) {
    char *base;
    char *hi;
    int index;
    int i;
    void **cursor;
    void *widget;
    f32 color;
    f32 green;
    f32 blue;
    f32 alpha;
    s16 adjust;
    void (*draw)(void *, float, double, double, float);

    base = menu;
    index = *(int *)(base + 0x22354) - 1;
    if (index < 0) {
        *(int *)(base + 0x22354) = 0;
        return;
    }
    *(int *)(base + 0x22354) = index;
    MainMenu__ConfigureSagaSelection(base, index);
    hi = base + 0x10000;
    UIList__SetSelectedIndex(hi + 25860, 0);
    color = lbl_8032B970;
    alpha = lbl_8032B974;
    green = color;
    i = 7;
    blue = green;
    UI__SetColorRGBA(hi - 15592, color, green, blue, alpha);
    widget = *(void **)(hi + 23360);
    cursor = (void **)(hi + 23304);
    hi += 22948;
    color = lbl_8032B970;
    green = color;
    blue = green;
    alpha = lbl_8032B974;
    adjust = *(s16 *)((char *)widget + 0x130);
    draw = *(void (**)(void *, float, double, double, float))((char *)widget + 0x134);
    draw(hi + adjust, color, green, blue, alpha);
    do {
        fn_8026B420(*cursor);
        cursor = (void **)((char *)cursor + 0x1A0);
        i--;
    } while (i != 0);
}
