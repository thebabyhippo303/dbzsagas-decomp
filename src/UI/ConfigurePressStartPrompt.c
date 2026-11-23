/* UI__ConfigurePressStartPrompt @ 0x80138B3C (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct UIInner {
    char pad[28];
    int flag;
} UIInner;

typedef struct UIRoot {
    char pad[568];
    UIInner *inner;
} UIRoot;

typedef struct PressStartUI {
    char pad[2172];
    int ready;
} PressStartUI;

extern void *lbl_803DCC54 __attribute__((section(".sdata")));
extern UIRoot *lbl_803DC3A0 __attribute__((section(".sdata")));
extern int lbl_803DC354 __attribute__((section(".sdata")));
extern int lbl_803DC358 __attribute__((section(".sdata")));

extern float lbl_8032B434 __attribute__((section(".rodata")));
extern float lbl_8032B438 __attribute__((section(".rodata")));
extern float lbl_8032B43C __attribute__((section(".rodata")));
extern float lbl_8032B440 __attribute__((section(".rodata")));
extern float lbl_8032B444 __attribute__((section(".rodata")));
extern float lbl_8032B448 __attribute__((section(".rodata")));
extern float lbl_8032B44C __attribute__((section(".rodata")));
extern char lbl_8032B428[] __attribute__((section(".rodata")));

extern void fn_801D65B0(void *audio);
extern void fn_80270784(void *widget, char *text);
extern void fn_8026C7F8(void *widget, float a, float b, float c, float d);
extern void fn_80272248(void *widget, float a);
extern void fn_8026C528(void *widget, float a, float b);
extern void fn_8026C5A0(void *widget, float a, float b);
extern void fn_802721F4(void *widget, float a);
extern void fn_8026C6F8(void *widget, int value);
extern void fn_8026D5BC(void *widget, int a, int b, int c, int d);
extern void fn_8026D498(void *widget);
extern void MainMenu__InitializeScreenWidgets(void *widget);

void UI__ConfigurePressStartPrompt(PressStartUI *self) {
    fn_801D65B0(lbl_803DCC54);
    fn_80270784(self, lbl_8032B428);
    fn_8026C7F8(self, lbl_8032B434, lbl_8032B438, lbl_8032B434, lbl_8032B43C);
    fn_80272248(self, lbl_8032B440);
    fn_8026C528(self, lbl_8032B444, lbl_8032B448);
    fn_8026C5A0(self, lbl_8032B444, lbl_8032B444);
    fn_802721F4(self, lbl_8032B44C);
    fn_8026C6F8(self, 400);
    fn_8026D5BC(self, 1, 255, 2, 2);
    fn_8026D498(self);
    lbl_803DC3A0->inner->flag = 1;
    self->ready = 1;
    if (lbl_803DC354 != 0 || lbl_803DC358 != 0) {
        MainMenu__InitializeScreenWidgets(self);
    }
}
