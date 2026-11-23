/* MenuInput__InitializeWeaponActionPrompts @ 0x80105484 (size: 0xF0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MenuInput__InitializeWeaponActionPrompts @ 0x80105484 (0xF0). ProDG -O2. */
extern char *lbl_803DC3C0;
extern int lbl_803DC598;
extern unsigned char lbl_8031FC10 __attribute__((section(".data")));
extern char lbl_8031D820[] __attribute__((section(".data")));
extern float lbl_80325420 __attribute__((section(".data")));
extern float lbl_80325424 __attribute__((section(".data")));
extern float lbl_80325428 __attribute__((section(".data")));
extern float lbl_8032542C __attribute__((section(".data")));
extern float lbl_80325430 __attribute__((section(".data")));
extern void MenuInput__DestroyWeaponPromptVisuals(void *self);
extern void *memset();
extern void MenuInput__ResolveWeaponActionPromptId(void *self);
extern int fn_80254CC4(int a, int b, int c, int d);
extern void UI__CreateTextWidget(void *self, void *a, void *b, int c, float f1, float f2, float f3, float f4);
extern void MenuInput__UpdateWeaponActionPrompts(void *self, int a, int b, void *c);

void MenuInput__InitializeWeaponActionPrompts(char *self) {
    if (*(int *)(lbl_803DC3C0 + 0x1C5C) != 0 && *(int *)(self + 0xFAC) != 0) {
        unsigned char buf[16];
        int h;
        MenuInput__DestroyWeaponPromptVisuals(self);
        buf[0] = lbl_8031FC10;
        memset(buf + 1, 0, 15);
        MenuInput__ResolveWeaponActionPromptId(self);
        h = fn_80254CC4(lbl_803DC598, *(int *)(self + 0xA38), 0, 16);
        UI__CreateTextWidget(self, self + 0xF7C, self + 0xF80, 0, lbl_80325420, lbl_80325424, lbl_80325428, lbl_8032542C);
        {
            float f = lbl_80325430;
            self[0xFA5] = 0;
            *(float *)(self + 0xFB0) = f;
        }
        MenuInput__UpdateWeaponActionPrompts(self, h, 0, lbl_8031D820);
        *(int *)(self + 0xFAC) = 0;
    }
}
