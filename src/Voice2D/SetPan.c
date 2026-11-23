/* Voice2D__SetPan @ 0x8019BD54 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
void Voice2D__ApplyPan(void *);
extern float lbl_8033FB80 __attribute__((section(".data")));
extern float lbl_8033FB84 __attribute__((section(".data")));

void Voice2D__SetPan(void *self, float pan) {
    float lo = lbl_8033FB80;
    float hi = lbl_8033FB84;
    float v = lo;
    if (!(pan < lo)) {
        if (!(pan <= hi)) v = hi; else v = pan;
    }
    *(float *)((char *)self + 0x58) = v;
    Voice2D__ApplyPan(self);
}
