/* Avatar__AddComboButton @ 0x800342BC (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int Script__PopInt(void *script, void *context);
extern void *lbl_803DC654;
extern void HUD__AddComboButtonForAvatar(void *hud, int a, int b, int c, int flags);

void Avatar__AddComboButton(void *script, void *context) {
    int a;
    int b;
    int c;

    a = Script__PopInt(script, context);
    b = Script__PopInt(script, context);
    c = Script__PopInt(script, context);
    HUD__AddComboButtonForAvatar(lbl_803DC654, a, b, c, 0);
}
