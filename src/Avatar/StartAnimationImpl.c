/* Avatar__StartAnimationImpl @ 0x800943A8 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned short u16;
int CActor__PlayAnimationOnChannel(void *, int, int, int, int);
extern float lbl_8031F91C __attribute__((section(".data")));

int Avatar__StartAnimationImpl(char *self, u16 anim, int a2, int a3, int a4, int hook) {
    int enabled = 1;
    int cond;
    if (*(int *)(self + 2020) == 0) {
        enabled = *(int *)(self + 724);
    }
    cond = 0;
    if (!(*(float *)(self + 648) > lbl_8031F91C) && *(int *)(self + 144) != 0) {
        cond = 1;
    }
    if (!(cond == 0 || enabled == 0)) {
        return 0;
    }
    if (hook != 0) {
        int (*fn)(int) = *(int (**)(int))(self + 468);
        if (fn != 0) {
            int r = fn(anim);
            if (r == -1) {
                return 0;
            }
            anim = (u16)r;
        }
    }
    return CActor__PlayAnimationOnChannel(self, anim, a2, a3, a4);
}
