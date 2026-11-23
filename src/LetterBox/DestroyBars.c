/* LetterBox__DestroyBars @ 0x8011A148 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: LetterBox__HideBars @ 0x8011A148 (0x6C). ProDG -O2. */
extern void *lbl_803DD994;
extern void *lbl_803DD990;

void LetterBox__HideBars(void) {
    char *vt;
    register void *bar;

    bar = lbl_803DD994;
    if (bar != 0) {
        vt = *(char **)((char *)bar + 0x19C);
        (*(void (**)(void *, int))(vt + 0xC))((char *)bar + *(short *)(vt + 8), 3);
    }
    bar = lbl_803DD990;
    if (bar != 0) {
        vt = *(char **)((char *)bar + 0x19C);
        (*(void (**)(void *, int))(vt + 0xC))((char *)bar + *(short *)(vt + 8), 3);
    }
}
