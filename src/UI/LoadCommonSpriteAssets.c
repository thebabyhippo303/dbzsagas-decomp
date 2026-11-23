/* UI__LoadCommonSpriteAssets @ 0x800FEC1C (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_80324904[];
extern char lbl_80324918[];
extern char lbl_80324930[];
extern char lbl_80324944[];
extern char lbl_8032495C[];
extern char lbl_80324978[];
extern char lbl_80324990[];
extern void *dblLoad(void *path, int a, int b);
extern void *lbl_803DC630;
extern void *lbl_803DC634;
extern void *lbl_803DC63C;
extern void *lbl_803DC640;
extern void *lbl_803DC644;
extern void *lbl_803DC648;
extern void *lbl_803DC64C;

void UI__LoadCommonSpriteAssets(void) {
    lbl_803DC630 = dblLoad(lbl_80324904, 0, 0);
    lbl_803DC634 = dblLoad(lbl_80324918, 0, 0);
    lbl_803DC63C = dblLoad(lbl_80324930, 0, 0);
    lbl_803DC640 = dblLoad(lbl_80324944, 0, 0);
    lbl_803DC644 = dblLoad(lbl_8032495C, 0, 0);
    lbl_803DC648 = dblLoad(lbl_80324978, 0, 0);
    lbl_803DC64C = dblLoad(lbl_80324990, 0, 0);
}
