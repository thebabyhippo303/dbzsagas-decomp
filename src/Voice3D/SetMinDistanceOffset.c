/* Voice3D__SetMinDistanceOffset @ 0x8019C004 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
void Voice3D__ApplySpatialization(void *);
extern float lbl_8033FB90 __attribute__((section(".data")));
extern float lbl_8033FB94 __attribute__((section(".data")));

void Voice3D__SetMinDistanceOffset(void *self, float val) {
    float lo = lbl_8033FB90;
    float hi = lbl_8033FB94;
    float v = lo;
    if (!(val < lo)) {
        if (!(val <= hi)) v = hi; else v = val;
    }
    *(float *)((char *)self + 0x90) = v;
    Voice3D__ApplySpatialization(self);
}
