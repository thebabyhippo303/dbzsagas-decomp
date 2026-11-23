/* UpgradeMenu__SelectPreviousAttackCategory @ 0x80016FC4 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: UpgradeMenu__SelectPreviousAttackCategory @ 0x80016FC4 (0x12C). ProDG -O2. */
typedef struct {
    char pad0[0x16F8];
    void *widget;
    char pad1[0x1C14 - 0x16FC];
    char label[0x3D48 - 0x1C14];
    int category;
} UpgradeMenu;

extern char lbl_8030DBF4[];
extern char lbl_8030DAC0[];
extern char lbl_8030DBC0[];
extern char lbl_8030DBD0[];
extern char lbl_8030DC00[];
extern char lbl_8030DC04[];
extern char lbl_8030DC08[];
extern char lbl_8030DC0C[];
extern char lbl_8030DC10[];

extern void fn_80188B64(char *name, int mode);
extern void fn_80270784(void *label, char *text);
extern void fn_8026B420(void *widget);
extern void fn_80260304(void *node, float x, float y);
extern void fn_8026B0C8(void *widget, int flag);

void UpgradeMenu__SelectPreviousAttackCategory(UpgradeMenu *menu) {
    int category;

    fn_80188B64(lbl_8030DBF4, 0);
    category = menu->category - 1;
    menu->category = category;
    if (category < 0) {
        menu->category = 2;
    }
    switch (menu->category) {
    case 0:
        fn_80270784(menu->label, lbl_8030DAC0);
        break;
    case 1:
        fn_80270784(menu->label, lbl_8030DBC0);
        break;
    case 2:
        fn_80270784(menu->label, lbl_8030DBD0);
        break;
    }
    fn_8026B420(menu->widget);
    fn_80260304((char *)menu->widget + 0x304, *(float *)lbl_8030DC00, *(float *)lbl_8030DC00);
    fn_80260304((char *)menu->widget + 0x304, *(float *)lbl_8030DC04, *(float *)lbl_8030DC08);
    fn_80260304((char *)menu->widget + 0x304, *(float *)lbl_8030DC0C, *(float *)lbl_8030DC08);
    fn_80260304((char *)menu->widget + 0x304, *(float *)lbl_8030DC10, *(float *)lbl_8030DC00);
    fn_8026B0C8(menu->widget, 0);
}
