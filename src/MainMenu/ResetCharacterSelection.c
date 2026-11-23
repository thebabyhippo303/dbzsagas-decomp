/* MainMenu__ResetCharacterSelection @ 0x80012590 (size: 0x16C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

extern f32 lbl_8030D8C8 __attribute__((section(".data")));
extern f32 lbl_8030D8CC __attribute__((section(".data")));
extern f32 lbl_8030D8D0 __attribute__((section(".data")));

extern void fn_8026B420(void *widget);
extern void UI__SetColorRGBA(void *widget, f32 r, f32 g, f32 b, f32 a);
extern void MainMenu__SetPlayerSelectState(void *menu, int state);

void MainMenu__ResetCharacterSelection(void *menu) {
    void *widget;
    s32 index;

    widget = *(void **)((char *)menu + 0x22A4);
    index = 6;
    *(s32 *)((char *)menu + 0xDA0) = 0;
    while (widget != 0) {
        fn_8026B420(*(void **)((char *)widget + 0x164));
        switch (index) {
        case 1:
        case 2:
        case 4:
        case 5:
            if (*(s32 *)((char *)menu + 0xD94) != 0) {
                UI__SetColorRGBA(widget, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8CC);
            } else {
                UI__SetColorRGBA(widget, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8D0);
            }
            break;
        case 3:
            UI__SetColorRGBA(widget, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8C8);
            break;
        default:
            UI__SetColorRGBA(widget, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8CC);
            break;
        }
        widget = *(void **)((char *)widget + 0x1B0);
        index -= 1;
    }
    *(s32 *)((char *)menu + 0xDC4) = 0;
    UI__SetColorRGBA((char *)menu + 0x1F10, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8CC);
    UI__SetColorRGBA((char *)menu + 0x20B0, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8CC);
    UI__SetColorRGBA((char *)menu + 0x19DC, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8CC);
    UI__SetColorRGBA((char *)menu + 0x1B7C, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8C8, lbl_8030D8CC);
    MainMenu__SetPlayerSelectState(menu, 2);
}
