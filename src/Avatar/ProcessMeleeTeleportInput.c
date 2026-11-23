/* Avatar__ProcessMeleeTeleportInput @ 0x800A3C34 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__ProcessMeleeTeleportInput @ 0x800A3C34 (0x12C). ProDG -O2. */
extern char *lbl_803DC3C0;
extern char lbl_80320248[] __attribute__((section(".data")));
extern void fn_8009B428(void *obj);
extern int Avatar__CanAffordItemImpl(void *avatar, float cost);
extern void Avatar__SetAnimScriptVarIntImpl(void *avatar, char *name, int a, int b);
extern int Avatar__StartAnimationImpl(void *avatar, unsigned short anim, int a, int b, int c, int d);

void Avatar__ProcessMeleeTeleportInput(void **self) {
    char *avatar = (char *)*self;
    char *state = *(char **)(avatar + 0x84);
    short cur;
    if (*(short *)(*(char **)(state + 0xF0) + 0xA) != 0x900) {
        if (*(int *)(lbl_803DC3C0 + 0x1C64) != 0) {
            int mode = *(int *)(*(char **)(lbl_803DC3C0 + 0x238) + 4);
            if ((*(int *)(avatar + 0x7E4) == 0 || (unsigned)(mode - 2) > 0x13) &&
                *(short *)(*(char **)(state + 0xF4) + 0xA) == 0x100)
                fn_8009B428(*(void **)(avatar + 0x159C));
        } else if (Avatar__CanAffordItemImpl(avatar, *(float *)(lbl_803DC3C0 + 0x209C)) != 0) {
            char *a2 = (char *)*self;
            int has = 0;
            if (*(int *)(*(char **)(a2 + 0x159C) + 0xF30) != 0)
                has = 1;
            if (has != 0) {
                char *st2 = *(char **)(a2 + 0x84);
                cur = *(short *)(*(char **)(st2 + 0xF4) + 0xA);
                if (cur != 0xE00) {
                    short c2;
                    if ((cur & 0xFF00) == 0x400) {
                        Avatar__SetAnimScriptVarIntImpl(a2, lbl_80320248, 1, 1);
                        return;
                    }
                    c2 = *(short *)(*(char **)(st2 + 0xF0) + 0xA);
                    if (c2 == 0x101 || (c2 & 0xFF00) == 0x500)
                        Avatar__StartAnimationImpl(a2, 0xC00, 1, 0, 0, 1);
                }
            }
        }
    }
}
