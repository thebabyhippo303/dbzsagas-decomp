/* MenuController__CreateConfirmationDialog @ 0x8004BA4C (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;
extern char lbl_803106B8[] __attribute__((section(".data")));
extern char lbl_80310AD0[] __attribute__((section(".data")));
extern char lbl_80316F90[] __attribute__((section(".data")));
extern f32 lbl_80316FA0 __attribute__((section(".data")));
extern f32 lbl_80316FA4 __attribute__((section(".data")));

void *fn_801842C4(s32);
void fn_8026B590(void *);
void fn_80270450(void *);
void fn_80270784(void *, char *);
void fn_800178B4(void *);
void fn_800184D4(void *, f32, f32);

void MenuController__CreateConfirmationDialog(char *menu) {
    char *d;
    char *p;
    char *vt;
    s32 c = 3;
    char *hi = menu + 0x10000;
    d = fn_801842C4(0x1204);
    p = d + 0xABC;
    fn_8026B590(d);
    *(char **)(d + 0x19C) = lbl_803106B8;
    fn_80270450(d + 0x1A0);
    fn_80270450(d + 0x394);
    fn_80270450(d + 0x588);
    fn_8026B590(d + 0x77C);
    fn_8026B590(d + 0x91C);
    vt = lbl_80310AD0;
    do {
        fn_8026B590(p);
        *(char **)(p + 0x19C) = vt;
        p += 0x1C0;
        c -= 1;
    } while (c != -1);
    *(char **)(hi - 20836) = d;
    {
        char *h2 = menu + 0x10000;
        *(s32 *)(d + 0x11D0) = 0;
        *(s32 *)(d + 0x11CC) = 0;
        fn_800178B4(*(char **)(h2 - 20836));
    }
    fn_80270784(*(char **)((menu + 0x10000) - 20836) + 0x1A0, lbl_80316F90);
    fn_800184D4(*(char **)((menu + 0x10000) - 20836), lbl_80316FA0, lbl_80316FA4);
}
