/* HUD__ResetWidgetCollectionState @ 0x8010DAD0 (size: 0x118, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float lbl_8032636C __attribute__((section(".data")));

#define ZERO_DOWN(self, top, n) \
    { int *p = (int *)((self) + (top)); int c = (n); do { *p = 0; p--; c--; } while (c != 0); }

void HUD__ResetWidgetCollectionState(char *self) {
    int zero;
    *(int *)(self + 2948) = 0;
    ZERO_DOWN(self, 2980, 8)
    ZERO_DOWN(self, 2944, 80)
    zero = 0;
    *(int *)(self + 3120) = zero;
    ZERO_DOWN(self, 3152, 8)
    ZERO_DOWN(self, 3116, 32)
    *(int *)(self + 3260) = zero;
    ZERO_DOWN(self, 3292, 8)
    ZERO_DOWN(self, 3256, 24)
    ZERO_DOWN(self, 3308, 4)
    *(char *)(self + 3160) = 0;
    *(int *)(self + 3316) = 1;
    *(float *)(self + 3156) = lbl_8032636C;
    *(int *)(self + 3320) = 2;
    *(int *)(self + 3312) = 0;
    *(float *)(self + 2984) = lbl_8032636C;
    *(char *)(self + 2988) = 0;
}
