/* MainMenu__HandleUpgradeLeftInput @ 0x8014E090 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef int s32;
typedef float f32;

int UIList__GetSelectedEntryValue(void *);
void UI__SetColorRGBA(void *, float, float, float, float);
void UpgradeMenu__RefreshSelectedUpgradeDisplay(void *);
void UpgradeMenu__SelectPreviousAttackCategory(void *);
void fn_80188B64(char *, int);
void fn_8026C508(void *, float, float);
void fn_8026C514(void *, float *, float *);
void fn_8026C634(void *, float, float);
f32 fn_80271C3C(void *);
void MainMenu__RebuildEntriesForCategory(void *, s32);
void UIList__SelectPrevious(void *, ...);
void fn_8026C5AC(void *, f32, f32);
f32 fn_80271C7C(void *);
extern s8 lbl_803251F0 __attribute__((section(".data")));
extern f32 lbl_8032BFC0 __attribute__((section(".data")));
extern f32 lbl_8032BFC4 __attribute__((section(".data")));
extern f32 lbl_8032BFC8 __attribute__((section(".data")));
extern f32 lbl_8032BFCC __attribute__((section(".data")));

#define APPLY(base, widget)                                                                 \
    do {                                                                                    \
        void *panel;                                                                        \
        f32 x;                                                                              \
        f32 a;                                                                              \
        f32 b;                                                                              \
        f32 c;                                                                              \
        f32 d;                                                                              \
        fn_8026C514(widget, (float *)((base) + 9436), (float *)((base) + 9440));           \
        panel = (base) - 17768;                                                             \
        x = fn_80271C3C(widget) + lbl_8032BFC0;                                             \
        fn_8026C634(panel, x, fn_80271C7C(widget));                                         \
        fn_8026C508(panel, *(f32 *)((base) + 9436), *(f32 *)((base) + 9440));               \
        a = lbl_8032BFC4;                                                                   \
        b = lbl_8032BFC8;                                                                   \
        fn_8026C5AC(panel, a, b);                                                           \
        a = lbl_8032BFCC;                                                                   \
        b = a;                                                                              \
        c = b;                                                                              \
        d = c;                                                                              \
        UI__SetColorRGBA(panel, a, b, c, d);                                               \
    } while (0)

void MainMenu__HandleUpgradeLeftInput(char *arg0) {
    char *base;

    base = arg0 + 0x10000;
    switch (*(s32 *)(base - 20848)) {
    case 2: {
        void *list;

        list = base - 17352;
        fn_80188B64(&lbl_803251F0, 0);
        UIList__SelectPrevious(list);
        if (UIList__GetSelectedEntryValue(list) == 0) {
            APPLY(base, base - 15944);
        } else {
            APPLY(base, base - 15444);
        }
        return;
    }
    case 3: {
        void *menu;

        fn_80188B64(&lbl_803251F0, 0);
        menu = base - 14028;
        UpgradeMenu__SelectPreviousAttackCategory(menu);
        MainMenu__RebuildEntriesForCategory(base - 13612, *(s32 *)(menu + 15688));
        UpgradeMenu__RefreshSelectedUpgradeDisplay(menu);
        return;
    }
    }
}
