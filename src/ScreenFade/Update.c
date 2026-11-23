/* ScreenFade__Update @ 0x8011933C (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern unsigned int fn_801850A8(void);
extern void fn_8022A3E4(int arg);
extern float lbl_80326FF8 __attribute__((section(".data")));
extern float lbl_80326FFC __attribute__((section(".data")));
extern float lbl_80327000 __attribute__((section(".data")));
extern float lbl_80327004 __attribute__((section(".data")));

static const char pool_pad[0x6FF0] = {1};

void ScreenFade__Update(float *self) {
    float t;
    float s;
    float lo;
    float hi;
    unsigned int ms = fn_801850A8();
    t = ((float)ms * lbl_80326FF8 - self[0]) / self[1];
    lo = lbl_80326FFC;
    hi = lbl_80327000;
    if (!(t >= lo)) {
        s = lo;
    } else if (!(t <= hi)) {
        s = hi;
    } else {
        s = t;
    }
    self[7] = (self[3] - self[2]) * (lbl_80327004 - (s + s)) * s * s + self[2];
    fn_8022A3E4(0);
}
