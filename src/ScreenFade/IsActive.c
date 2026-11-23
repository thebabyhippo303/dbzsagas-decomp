/* ScreenFade__IsActive @ 0x80119210 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *lbl_803DC698;
int ScreenFade__IsRunning(void *fade);

int ScreenFade__IsActive(void) {
    if (lbl_803DC698 != 0 && ScreenFade__IsRunning(lbl_803DC698) != 0)
        return 1;
    return 0;
}
