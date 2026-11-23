/* Avatar__ProcessRangedHoldRelease @ 0x800A325C (size: 0x134, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char *lbl_803DC3C0;
extern float lbl_80320200 __attribute__((section(".data")));
extern char lbl_8031F490[] __attribute__((section(".data")));
extern char lbl_8031F4C0[] __attribute__((section(".data")));
extern int Avatar__CanAffordItemImpl(void *avatar, float cost);
extern void Avatar__SetAnimScriptVarIntImpl(void *avatar, char *name, int a, int b);
extern int Avatar__StartAnimationImpl(void *avatar, unsigned short anim, int a, int b, int c, int d);
extern void fn_800A5750(void *self);

void Avatar__ProcessRangedHoldRelease(void **self) {
    char *avatar = (char *)*self;
    char *state = *(char **)(avatar + 0x84);
    short anim = *(short *)(*(char **)(state + 0xF0) + 0xA);

    if (anim != 0x900) {
        if (*(int *)((char *)self + 0x190) != 0 && (anim & 0xFF00) != 0x300) {
            if (!(*(float *)((char *)self + 0x1A0) >= lbl_80320200)) {
                int has = 0;
                if (*(int *)(*(char **)(avatar + 0x159C) + 0xEC4) != 0) {
                    has = 1;
                }
                if (has != 0) {
                    short mode = *(short *)(*(char **)(state + 0xF4) + 0xA);
                    if ((mode == 0x100 || mode == 0x200) &&
                        Avatar__CanAffordItemImpl(avatar, *(float *)(lbl_803DC3C0 + 0x2088)) != 0) {
                        char *a2 = (char *)*self;
                        char *st2 = *(char **)(a2 + 0x84);
                        short mode2 = *(short *)(*(char **)(st2 + 0xF4) + 0xA);
                        if (mode2 == 0x100) {
                            Avatar__StartAnimationImpl(a2, 0x200, 1, 0, 1, 1);
                            fn_800A5750(self);
                        } else if (mode2 == 0x200) {
                            Avatar__SetAnimScriptVarIntImpl(a2, lbl_8031F490, 1, 1);
                        }
                    }
                }
            }
        }
        *(int *)((char *)self + 0x190) = 0;
        Avatar__SetAnimScriptVarIntImpl(*self, lbl_8031F4C0, 0, 1);
    }
}
