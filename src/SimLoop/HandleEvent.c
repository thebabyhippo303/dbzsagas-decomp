/* SimLoop__HandleEvent @ 0x8001E2B4 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void FullScreenEffect__HandleEventIfActive(void *, int);
extern int fn_8021A57C(int);
extern char *fn_8022A3B4(int);
extern int fn_802436A8(void *);
extern int fn_8028FD74(void *, int);
extern float lbl_8030FD70 __attribute__((section(".data")));
extern void *lbl_803DC5E4;

void SimLoop__HandleEvent(char *self, unsigned event) {
    switch (event) {
    case 0x400F9:
    case 0x400FA:
    case 0x400FB:
    case 0x400FC:
    case 0x400FD:
        FullScreenEffect__HandleEventIfActive(lbl_803DC5E4, event);
        break;
    case 0x40029:
        fn_8021A57C(1);
        fn_8028FD74(self + (*(int *)(self + 0x1B44) * 0x228 + 0x16F4), 1);
        fn_802436A8(fn_8022A3B4(*(int *)(self + 0x2A4)) + 0xC);
        *(float *)(self + 0x1C2C) = lbl_8030FD70;
        break;
    }
}
