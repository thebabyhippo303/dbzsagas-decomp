/* HUD__ResetComboButtonState @ 0x8010DEC8 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef int s32;
typedef float f32;

extern f32 lbl_80326370 __attribute__((section(".data")));

void HUD__ResetComboButtonState(char *self) {
    s32 *a = (s32 *)(0xF7C + self);
    register s32 i;

    a[0] = 0;
    for (i = 8; i > 0; i--) {
        a[i] = 0;
    }
    {
        s32 *p1 = (s32 *)(self + 0xCFC);
        s32 *p2;
        s32 z = 0;
        p2 = (s32 *)(self + 0xE3C);
        for (i = 0; i < 80; i++) {
            p1[i] = z;
            p2[i] = z;
        }
    }
    {
        f32 k = lbl_80326370;
        s32 z = 0;
        *(s32 *)(self + 0xFAC) = 1;
        *(s32 *)(self + 0xFA8) = z;
        *(s8 *)(self + 0xFA4) = z;
        *(f32 *)(self + 0xFA0) = k;
        *(f32 *)(self + 0xFB0) = k;
    }
}
